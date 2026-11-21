# 手套 OTA 维护工具（macOS）

`bin/omniglove_ota_tool` 是独立固件维护工具。它从包内 `lib/omniglove/` 加载 libusb。
`BUILD_INFO.txt` 记录 OTA 实机验收状态。

从平台包或安装前缀执行以下命令。按官方更新包的说明选择 `--app`、`--node` 或 `--all`
及对应文件。校验命令只读取更新文件。

```sh
./bin/omniglove_ota_tool --help
./bin/omniglove_ota_tool --validate-only --all \
  --app /path/to/official-app-image --node /path/to/official-node-image
./bin/omniglove_ota_tool --list
```

实际更新前请关闭使用手套的应用，保持可靠的 USB 连接，并按官方更新说明执行。连接多只设备时
使用 `--list` 返回的临时 token 选择目标。更新完成后，通过 `omniglove_firmware_info` 核对
设备。更新中断时保留错误信息，按官方说明恢复。
