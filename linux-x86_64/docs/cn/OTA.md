# OTA 维护工具

`omniglove_ota_tool` 用于安装官方固件更新包，与 SDK 的常规初始化和业务 API 相互独立。
更新过程会改写设备固件，只能使用正式提供且与目标产品匹配的完整更新文件。

## 更新前准备

- 保持设备稳定供电并使用可靠的直连链路。
- 关闭所有正在使用手套的 SDK 示例、业务程序和维护工具。
- 一次只连接一只待更新设备，避免误选目标。
- 不要重命名、拆分、拼接或修改正式更新文件。

更新文件随附说明会明确应使用 `--app`、`--node` 或 `--all`，以及每个参数对应的正式文件。
不得仅根据文件名自行判断参数。

## 本地校验

在访问设备前校验正式更新文件：

```bash
./bin/omniglove_ota_tool --validate-only --all \
  --app <official-image-a> \
  --node <official-image-b>
```

单文件更新包应按随附说明只保留对应的 `--app` 或 `--node` 参数。工具会检查文件完整性及
目标匹配关系；若校验失败，必须停止操作，不得尝试绕过检查或改用来源不明的文件。

## 设备选择与更新

先列出当前可更新设备：

```bash
./bin/omniglove_ota_tool --list
```

只连接一只设备时，按更新包说明执行单文件或组合更新：

```bash
# 组合更新
./bin/omniglove_ota_tool --all \
  --app <official-image-a> \
  --node <official-image-b>

# 单文件更新：只执行更新包说明指定的一种形式
./bin/omniglove_ota_tool --app <official-image>
./bin/omniglove_ota_tool --node <official-image>
```

存在多个设备时，使用 `--list` 返回的临时 token 明确选择目标：

```bash
./bin/omniglove_ota_tool --device <token> --all \
  --app <official-image-a> \
  --node <official-image-b>
```

该 token 仅用于当前维护操作，不是稳定的 SDK 设备 ID。工具无法唯一确定目标时会拒绝写入。

## 执行与恢复

- 写入期间不要断电、拔线、关闭终端或启动其他会访问设备的程序。
- 工具报告成功后，重新连接设备，并通过 SDK 的只读固件信息接口确认设备可正常使用。
- 更新中断或失败后不从中间位置续传。保留完整错误输出，按照正式更新说明重新连接设备，
  然后重新执行完整更新命令；问题持续存在时联系技术支持。
- 不要通过反复更换文件或参数试探恢复设备。
