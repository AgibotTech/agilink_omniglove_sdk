# O10 / Ultra 遥操工具

`omniglove_teleop_tool` 读取 POST DIRECT 数据，支持 OmniHand O10（10 DoF）、
Ultra T1.3（20 DoF）和 Ultra T1.5（21 DoF）。可使用单只左/右手套，或恰好一左一右
两只手套与同型号机械手。默认是 dry-run；只有显式传入 `--execute` 才发送关节命令。

## 运行依赖

目标机必须按供应商说明安装与架构匹配的 OmniHand SDK，并完成 CAN/USB 权限配置。
Omniglove Release 不包含 OmniHand SDK 或供应商动态库。构建最低版本为 1.1.10；实际
构建版本见 `BUILD_INFO.txt`。其他安装前缀需配置动态链接器或
`LD_LIBRARY_PATH=<prefix>/lib`。

```bash
./bin/omniglove_teleop_tool --help
/usr/local/bin/omniglove_teleop_tool --help  # 使用 install.sh 后
```

## 安全验证

首次使用应准备硬件急停或断电措施，先运行 dry-run，再经人工确认进行限时低速写入：

```bash
# O10，默认 hand device ID 1
./bin/omniglove_teleop_tool \
  --hand-model o10 --transport hcan --side right \
  --adapter 0 --channel 0 --duration 10 --diagnostics

# Ultra T1.3，默认 hand device ID 9
./bin/omniglove_teleop_tool \
  --hand-model ultra-t1.3 --transport hcan --side right \
  --adapter 0 --channel 0 --duration 10 --diagnostics

# Ultra T1.5，默认 hand device ID 1；低速写入
./bin/omniglove_teleop_tool \
  --hand-model ultra-t1.5 --transport hcan --side right \
  --adapter 0 --channel 0 --control-mode keep \
  --rate-limit 0.2 --duration 3 --execute
```

Ultra 只接受 `--tip-source landmarks`。`--control-mode keep` 验证当前模式为 0 或 7；
`--control-mode pp` 仅在同时指定 `--execute` 时写入并回读全部 mode 7。dry-run 不写关节，
也不写控制模式。

`TELEOP_PAUSED` 不是锁存急停：有效数据恢复后可能继续写入。需要人工确认后再恢复时，
应结束进程并重新启动。第一次 `Ctrl-C` 请求有序关闭；若供应商 SDK 调用失去响应，
再次 `Ctrl-C` 强制退出。两者都不替代硬件急停。

## 双路与连接方式

```bash
./bin/omniglove_teleop_tool \
  --hand-model ultra-t1.5 --transport zlgcan --adapter 0 \
  --left 0 --right 1
```

双手套必须恰好一左一右，并提供不同的 `--left`/`--right` route。CAN adapter/TCP route
为 channel `0|1`，SocketCAN route 为不同接口名。单手套直接使用 SDK 上报的手别；
`--side` 仅为旧命令兼容参数。双路 execute 只在两只机械手打开、两条 POST stream 启动
并完成反馈同步后开启写门。

| `--transport` | 必需连接参数 | O10 | Ultra T1.3/T1.5 |
| --- | --- | --- | --- |
| `hcan` | `--adapter N` 或 `--adapter-serial S`，以及 `--channel N` | 支持 | 支持 |
| `zlgcan` | `--adapter N` 或 `--adapter-serial S`，以及 `--channel N` | 支持 | 支持 |
| `zlgcan-tcp` | `--tcp-host HOST --tcp-port N --channel N` | 支持 | 支持 |
| `socketcan` | `--can-interface can0` | 支持 | 支持 |
| `rs485` | `--serial-port PATH --baud-rate N` | 支持 | 不支持 |
| `usb` | `--serial-port PATH --baud-rate N` | 支持 | 不支持 |

## 求解与保护边界

工具内置只读固定模型，不运行 Python/Torch/Pinocchio/NLopt，也不加载 URDF/YAML/网格。
Ultra 使用机器人骨长适配、15 向量 DexPilot、中间关节点、指尖方向、时序正则和低通。
启动时校验产品 DoF、控制模式、反馈范围、固定模型端点和关节限位；输出经过逐关节限速。
T1.5 另有固定模型的塌缩、掌心中心穿透和跨指中心线交叉门禁，但它不是完整 CAD 碰撞、
物体接触或力控，首次执行仍必须低速并准备硬件急停。

完整参数和默认值以 `omniglove_teleop_tool --help` 为准。
