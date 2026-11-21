package com.agilink.omniglove;

import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicLong;

/** Owns Java delivery only; no lifecycle/native lock is acquired from the callback path. */
final class CallbackDispatcher implements AutoCloseable {
    interface Listener { void onSample(long[] metadata, byte[] payload); }
    interface ErrorHandler { void onError(RuntimeException error); }
    private final Map<Integer, Route> routes = new HashMap<>();
    private final ThreadPoolExecutor shared = worker("omniglove-callback", 64);
    private final AtomicLong drops = new AtomicLong();
    private final ErrorHandler errors;
    private boolean closed;
    CallbackDispatcher(ErrorHandler errors) { this.errors = errors; }
    private static ThreadPoolExecutor worker(String name, int capacity) {
        return new ThreadPoolExecutor(1, 1, 0, TimeUnit.MILLISECONDS, new ArrayBlockingQueue<>(capacity), runnable -> {
            Thread thread = new Thread(runnable, name); thread.setDaemon(true); return thread;
        }, new ThreadPoolExecutor.AbortPolicy());
    }
    synchronized void configure(int key, Listener listener, boolean isolated, int capacity) {
        if (closed) throw new IllegalStateException("Callback dispatcher is closed");
        Route next = new Route(listener, isolated ? worker("omniglove-callback-" + key, capacity) : shared, isolated);
        Route previous = routes.put(key, next);
        if (previous != null) previous.close();
    }
    synchronized void remove(int key) { Route route = routes.remove(key); if (route != null) route.close(); }
    synchronized void invalidate(int key) { Route route = routes.get(key); if (route != null) route.invalidate(); }
    void submit(int key, long[] metadata, byte[] payload) {
        Route route;
        synchronized (this) { route = routes.get(key); }
        if (route != null) route.submit(metadata, payload);
    }
    long droppedCount() { return drops.get(); }
    synchronized CallbackStatistics statistics(int key) {
        Route route = routes.get(key);
        return route == null ? new CallbackStatistics(0, 0, 0, 0, 0, 0, 0) : route.statistics();
    }
    @Override public synchronized void close() {
        if (closed) return;
        closed = true;
        for (Route route : routes.values()) route.close();
        routes.clear(); shared.shutdown();
    }
    private final class Route {
        private final Listener listener;
        private final ThreadPoolExecutor executor;
        private final boolean isolated;
        private boolean closed;
        private long generation, accepted, delivered, droppedFull, discarded, failures, highWatermark;
        private int pending;
        Route(Listener listener, ThreadPoolExecutor executor, boolean isolated) {
            this.listener = listener; this.executor = executor; this.isolated = isolated;
        }
        synchronized void submit(long[] metadata, byte[] payload) {
            if (closed) return;
            Task task = new Task(this, generation, metadata, payload);
            ++pending;
            try {
                executor.execute(task); ++accepted; highWatermark = Math.max(highWatermark, pending);
            } catch (RejectedExecutionException full) {
                --pending; ++droppedFull; drops.incrementAndGet();
            }
        }
        synchronized void invalidate() {
            ++generation;
            // Purge this route's jobs even on the shared executor, freeing capacity immediately.
            for (Runnable runnable : executor.getQueue()) {
                if (runnable instanceof CallbackDispatcher.Task && ((Task) runnable).route == this && executor.remove(runnable)) {
                    --pending; ++discarded;
                }
            }
        }
        synchronized void close() {
            closed = true; invalidate();
            // No join or interruption of user code: a running listener may finish after close.
            if (isolated) executor.shutdown();
        }
        synchronized CallbackStatistics statistics() {
            return new CallbackStatistics(accepted, delivered, droppedFull, discarded, failures, highWatermark, pending);
        }
    }
    private final class Task implements Runnable {
        private final Route route;
        private final long generation;
        private final long[] metadata;
        private final byte[] payload;
        Task(Route route, long generation, long[] metadata, byte[] payload) {
            this.route = route; this.generation = generation; this.metadata = metadata; this.payload = payload;
        }
        @Override public void run() {
            synchronized (route) {
                --route.pending;
                if (route.closed || generation != route.generation) { ++route.discarded; return; }
                ++route.delivered;
            }
            try { route.listener.onSample(metadata, payload); }
            catch (RuntimeException failure) {
                synchronized (route) { ++route.failures; }
                errors.onError(failure);
            }
        }
    }
}
