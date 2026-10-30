[中文声明](THIRD_PARTY_NOTICES_CN.md)

# Third-Party Notices

Omniglove-owned code and documentation are licensed by Agibot Co., Ltd. under
[MulanPSL-2.0](LICENSE). Third-party components remain governed by their original
licenses; the project license neither replaces nor modifies those terms.

| Component | Pinned version/snapshot | License | Distribution | License text |
|---|---|---|---|---|
| {fmt} | 12.2.0 | MIT | statically included in the SDK shared library | [fmt-LICENSE](licenses/fmt-LICENSE) |
| libusb | `v1.0.30-0-12-gbea6567` / `bea6567b63796ab27c1c33257d230284fb2d8316` | LGPL-2.1-or-later | separate `libusb-1.0.so.0` on Linux; separate `libusb-1.0.dll` on Windows | [libusb-COPYING](licenses/libusb-COPYING), [libusb-AUTHORS](licenses/libusb-AUTHORS) |
| wjwwood serial | 1.2.1 | MIT | statically included in the SDK shared library | [wjwwood-serial-LICENSE](licenses/wjwwood-serial-LICENSE) |
| O10 SLSQP | NLopt 2.9.1 / `11cff2c773b4b98821915a72179f4667c307ce6d` | BSD | statically included only in the optional teleop tool | [o10-slsqp-LICENSE](licenses/o10-slsqp-LICENSE) |

Copyright and license notices within each component take precedence. This table
is an index only and does not replace or modify original license text.

## External OmniHand runtime dependency

`omniglove_teleop_tool` requires an OmniHand SDK installed separately on the
target. That SDK and its vendor libraries are not copied, modified,
or redistributed here. Their licensing and deployment conditions are governed
by the vendor delivery.

## Corresponding libusb source and replacement rights

Linux distributes libusb as a separate replaceable shared library without
overwriting system libusb. Recipients may study, modify, debug, or replace it
under LGPL-2.1-or-later.

Complete source exactly corresponding to the binary is in
[`sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz`](sources/libusb-bea6567b63796ab27c1c33257d230284fb2d8316.tar.gz).
Linux rebuild and replacement steps are in
`linux-<arch>/docs/en/LIBUSB_REBUILD.md`.

Windows likewise distributes a replaceable `libusb-1.0.dll` with the same
source archive and license.
