# OTA Maintenance Tool for Windows

`omniglove_ota_tool.exe` installs official firmware update packages. It is
separate from normal SDK initialization and application APIs. An update rewrites
device firmware; use only complete official files intended for the target
product.

## Before updating

- Keep the device on stable power and use a reliable direct connection.
- Close SDK examples, applications, and maintenance tools using the glove.
- Connect only one device to be updated at a time.
- Do not rename, split, combine, or modify official update files.

The instructions supplied with an update package specify whether to use
`--app`, `--node`, or `--all`, and which official file belongs to each option.
Do not infer the option from a filename alone.

## Local validation

Validate official update files before accessing a device:

```powershell
.\bin\omniglove_ota_tool.exe --validate-only --all `
  --app <official-image-a> `
  --node <official-image-b>
```

For a single-file update, retain only the `--app` or `--node` option specified
by its instructions. The tool checks file integrity and target compatibility.
If validation fails, stop; do not bypass the checks or substitute an untrusted
file.

## Device selection and update

List connected update targets first:

```powershell
.\bin\omniglove_ota_tool.exe --list
```

With only one device connected, run the single-file or combined form specified
by the update package:

```powershell
# Combined update
.\bin\omniglove_ota_tool.exe --all `
  --app <official-image-a> `
  --node <official-image-b>

# Single-file update: use only the form specified by the package
.\bin\omniglove_ota_tool.exe --app <official-image>
.\bin\omniglove_ota_tool.exe --node <official-image>
```

If multiple devices are connected, use the temporary token returned by
`--list` to select one explicitly:

```powershell
.\bin\omniglove_ota_tool.exe --device <token> --all `
  --app <official-image-a> `
  --node <official-image-b>
```

The token is valid only for the current maintenance operation and is not a
stable SDK device ID. The tool refuses to write if it cannot identify one target.

## Execution and recovery

- Do not disconnect power or data, close the terminal, or start another program
  that accesses the device while writing is in progress.
- After success, reconnect the device and use the SDK read-only firmware
  information API to confirm normal operation.
- An interrupted or failed update does not resume from the middle. Retain the
  complete error output, reconnect as directed by the official instructions,
  and rerun the complete update command. Contact technical support if the issue
  persists.
- Do not attempt recovery by repeatedly changing files or parameters.
