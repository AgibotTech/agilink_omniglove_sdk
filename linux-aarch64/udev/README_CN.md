[English guide](README.md)

# Linux USB 权限

SDK 和示例程序不应使用 `sudo` 运行。在 Linux 平台包根目录执行：

```bash
sudo ./scripts/install_udev.sh
```

脚本会把本平台包内的 `udev/60-omniglove-usb.rules` 安装到
`/etc/udev/rules.d/` 并重新加载规则。安装后请拔出并重新连接已经接入的手套。

随包规则只向受支持的正常运行设备授予访问权限。桌面环境通过 `uaccess` 授权当前用户；
无桌面的服务账号需要加入 `plugdev` 组并重新登录。

可检查设备节点权限，然后以普通用户运行平台实物示例：

```bash
ls -l /dev/bus/usb/BBB/DDD
./scripts/run_glove_demo.sh 10
```

## 文档索引

- [Linux 安装、API 接入与 Quick Start](../README_CN.md)
- [Linux 依赖与兼容性](../docs/cn/DEPENDENCIES.md)
- [公开 C API 使用说明](../../docs/cn/PUBLIC_C_API.md)
- [DIRECT 与 UDP 数据流 layout](../../docs/cn/STREAM_DATA_V1.md)
- [ROS 2 数据流 layout](../../docs/cn/ROS2_STREAM_DATA_V1.md)
- [触觉点位 layout](../../docs/cn/TACTILE_LAYOUT_V1.md)

## 许可证

- [项目许可证](../../LICENSE)
- [第三方许可说明](../../THIRD_PARTY_NOTICES.md)
