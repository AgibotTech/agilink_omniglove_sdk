[English notices](THIRD_PARTY_NOTICES.md)

# 第三方组件声明

Omniglove SDK 自有代码和文档由 Agibot Co., Ltd. 依据
[MulanPSL-2.0](LICENSE) 授权。第三方组件仍分别受其原始许可证约束；本项目许可证不会
替代或修改这些条款。

| 组件 | 固定版本/快照 | 许可证 | 发行方式 | 许可证文本 |
| --- | --- | --- | --- | --- |
| {fmt} | 12.2.0 | MIT | 静态合入 SDK 共享库 | [fmt-LICENSE](licenses/fmt-LICENSE) |
| libusb | `v1.0.30-0-12-gbea6567` / `bea6567b63796ab27c1c33257d230284fb2d8316` | LGPL-2.1-or-later | Linux 独立动态库 `libusb-1.0.so.0`；Windows 独立动态库 `libusb-1.0.dll` | [libusb-COPYING](licenses/libusb-COPYING)、[libusb-AUTHORS](licenses/libusb-AUTHORS) |
| wjwwood serial | 1.2.1 | MIT | 静态合入 SDK 共享库 | [wjwwood-serial-LICENSE](licenses/wjwwood-serial-LICENSE) |
| Teleop SLSQP（O10/T1.3） | NLopt 2.9.1 / `11cff2c773b4b98821915a72179f4667c307ce6d` | BSD | 可选 teleop 工具内静态链接 | [o10-slsqp-LICENSE](licenses/o10-slsqp-LICENSE) |

各组件自身文件中的版权和许可证声明具有优先效力。上表仅用于帮助定位，不构成对原始
许可证文本的替代或修改。

## 外部 OmniHand 运行依赖

`omniglove_teleop_tool` 需要目标机另行安装 OmniHand SDK。OmniHand SDK 及其供应商库
不属于本发行包，未被复制、修改或再分发；其许可与部署条件以供应商
交付内容为准。

## libusb 对应源码与替换权利

Linux 包将 libusb 作为独立、可替换的共享库分发，不覆盖系统的同名库。接收者可以按
LGPL-2.1-or-later 的条款研究、修改、调试或替换该库。

与发行二进制精确对应的完整固定源码位于
[`sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz`](sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz)。
Linux 重建和替换步骤见对应架构目录下的
`linux-<arch>/docs/cn/LIBUSB_REBUILD.md`。

Windows 包同样提供独立、可替换的 `libusb-1.0.dll`，与 Linux 包共用对应源码归档和
许可证。
