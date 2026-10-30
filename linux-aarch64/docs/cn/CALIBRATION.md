# 六动作个人标定工具

Linux 平台包提供三个已经编译好的命令行工具：

- `omniglove_calibration_tool`：引导完成左右手六动作采集、拟合、candidate 保存与激活，
  并可选择立即写入设备；
- `omniglove_calibration_urdf_tool`：将已有 candidate 离线导出为个人化运动学 URDF；
- `omniglove_bone_deploy_tool`：将之前保存的 candidate 写入其对应设备，并执行完整回读
  比较。

采集和 BONE 部署工具操作自动发现的手套；URDF 导出不需要连接手套。

## 运行前准备

先按平台 [README](../../README_CN.md) 安装 USB 权限规则并重新插拔手套。工具要求恰好有
一个成功初始化的设备。不要使用 `sudo` 运行标定；应让 candidate 文件归当前用户所有。

可以直接从未安装的平台目录运行：

```bash
./bin/omniglove_calibration_tool --work-dir ./calibration-output
```

使用 `install.sh` 安装后，也可以直接运行：

```bash
omniglove_calibration_tool --work-dir ./calibration-output
```

默认 `--publish save` 将 candidate 保存到主机、在同目录写入同名 `.urdf`，再切换 active
manifest，不写设备。完整
流程依次采集平放零位、四指同步屈伸两次，以及拇指对食指、中指、无名指和小指四个接触
动作。流中断、序号缺口、低置信度、动作错误或静止度不足会使当前连续窗口失效，而不会
静默接受不完整证据。

需要在保存后立即写入设备时，显式使用：

```bash
./bin/omniglove_calibration_tool \
  --work-dir ./calibration-output \
  --publish save-and-device
```

该模式先保存主机 candidate，再编码并写入 BONE v4，最后要求设备回读内容逐字节一致。
写入失败不会删除已经保存的 candidate。

## 导出个人化 URDF

新标定会自动生成 `candidates/candidate-....urdf`。已有 schema-v3 candidate 可离线导出，
无需重新采集：

```bash
./bin/omniglove_calibration_urdf_tool \
  --candidate ./calibration-output/candidates/candidate-....ogcal
```

默认把 `.ogcal` 后缀改为 `.urdf`；可用 `--output FILE.urdf` 指定其他路径。工具不会覆盖
已有文件。URDF 保留 `ik_og@3ab1046` 的关节名、左右手轴向、个人指节长度和拇指 CMC
位置，是不依赖外部 mesh 的运动学模型；传感器外参、置信度证据和诊断仍以配对的
`.ogcal` 为准。

### URDF 坐标系与 TF

URDF（统一机器人描述格式）用 `link` 表示局部坐标系，用 `joint` 描述父子 link 之间的
连接和运动关系，组成一棵运动学树。

- 本工具生成的 URDF 以 **`wrist`（腕部坐标系）为根节点**，与 IK 文档的输出参考系一致。
  掌部和五指的位姿通过运动学链在腕系下表达。
- 每个 joint 的 `origin xyz/rpy` 描述零关节角时相对父 link 的平移和旋转，单位分别为
  米和弧度；`axis` 在该 joint 的局部坐标系中表达。结合关节角逐级组合这些变换，才能
  得到各 link 在腕系下的位姿。`wrist → glove_base → palm_link` 的固定变换已写入文件，
  使用 URDF 正向运动学时无需再次施加。
- `emf_tx_base` 是标称发射器安装参考；个人标定的实际 TX 与腕系变换仍以 `.ogcal` 为准。

腕系轴向、左右手约定及 TF 层级请参阅
[IK 解算数据描述：坐标系与坐标变换](../../../docs/cn/IK_DATA_DESCRIPTION.md) 的第 2–4 节。
接入机器人基座、相机或世界系时，需要由使用方提供腕系在外部参考系中的安装或跟踪位姿，
再与 URDF 正向运动学得到的腕系内位姿组合；URDF 本身不提供全局定位。

## 延迟部署 candidate

将已保存的 candidate 写入其精确匹配的设备：

```bash
./bin/omniglove_bone_deploy_tool \
  --candidate ./calibration-output/candidates/candidate-....ogcal
```

部署工具会核对 candidate 的设备身份和手别，写入 BONE v4 并执行逐字节回读。默认只显示
长 payload 的 32 字节预览；诊断时可增加 `--full-payload`。

## 数据与版本

- capture artifact schema：v2；
- candidate schema：v3；
- 坐标约定：right-handed TX，位置由毫米转换为米，姿态为 ZYX yaw/pitch/roll；
- 零位五指位置/姿态 p95 门限：3 mm/3 度；
- 相邻帧位置/姿态 p95 门限：1.6 mm/2 度；
- 腕部姿态 p95 门限：3 度。

旧 candidate schema 不会被静默解释为当前可写格式。建议为每次标定保留完整工作目录，
并在写入设备前备份已有 candidate。

## 诊断输入

保留的 UDP 模式仅用于诊断和回放，不是正常实物标定入口：

```bash
./bin/omniglove_calibration_tool \
  --source udp --listen 127.0.0.1 --port 45550
```
