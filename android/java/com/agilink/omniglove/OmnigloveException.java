package com.agilink.omniglove;

/** Native operation failure. code uses the enum for the named operation. */
public final class OmnigloveException extends RuntimeException {
    public final String operation;
    public final int code;
    public OmnigloveException(String operation, int code) {
        super(operation + " (code " + code + ")");
        this.operation = operation;
        this.code = code;
    }
}
