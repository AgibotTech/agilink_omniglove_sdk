# T1.5 Tactile-Point Layout v1

Each hand has 746 valid tactile points, read through the 15 regions below.
DIRECT, UDP, and ROS 2 share the same point order. Local indices start at 1
independently in each region. Both hands have the same region counts and global
slices; use the respective matrices for their two-dimensional placement.

Each valid point has a `uint8` tactile value in the range `0..255` with a
resolution of `1 g/LSB`: a value `n` represents `n g`. Positive matrix
numbers are point indices, not tactile measurements.

## Reading the matrices

- Rows run from top to bottom and columns from left to right; the matrix bounds
  are `rows × columns`.
- A matrix `0` means no sensor and is skipped. A valid sensor whose tactile
  measurement is `0` remains a valid point.
- A positive integer `k` is the one-based local index in the current region,
  read as `data[k-1]`. The output contains only valid points and has length
  `count`; empty matrix cells do not add bytes.
- `rows × columns` counts matrix cells; `count` counts valid points.
  For example, `thumb.tip` has 56 cells and 38 output values;
  `palm.surface` has 600 cells and 308 output values.
- A global slice `[a,b)` is zero-based and half-open. Local index `k` has
  global index `i=a+k-1`. In POSE mode 1, `tac_pos.points[i]` pairs with
  this tactile value; XYZ positions are in metres in the wrist frame.
- Select the left or right matrix using the sample's `hand`. Use that hand's
  listed indices for placement without mirroring or reordering the data array.

For example, local index 1 in `index.pad` reads `index.pad.data[0]` and
has global tactile index 104, paired with `tac_pos.points[104]` in POSE
mode 1. Local index 28 in the same region has global index 131.

See [DIRECT / UDP Data Formats](./STREAM_DATA_V1.md) for region objects,
output formats, and unmapped data. The table uses UDP paths; the DIRECT / ROS 2
palm field is `tactile.palm_surface`. Other regions use
`tactile.<finger>.<region>`. All 15 regions in the table are nonempty;
other region slots in the public structures remain empty.

See [Tactile-Point Mapping Images](./TACTILE_POINT_MAPPING_IMAGES.md) for
palm-side placement on both hands.

## Regions and global slices

| Region | Matrix (rows×columns) | Valid points (count) | Global slice |
|---|---:|---:|---|
| [`thumb.tip`](#thumb-tip) | 8×7 | 38 | `[0,38)` |
| [`thumb.pad`](#thumb-pad) | 4×7 | 28 | `[38,66)` |
| [`index.tip`](#index-tip) | 8×7 | 38 | `[66,104)` |
| [`index.pad`](#index-pad) | 4×7 | 28 | `[104,132)` |
| [`index.root`](#index-root) | 4×7 | 28 | `[132,160)` |
| [`middle.tip`](#middle-tip) | 8×7 | 37 | `[160,197)` |
| [`middle.pad`](#middle-pad) | 4×7 | 28 | `[197,225)` |
| [`middle.root`](#middle-root) | 4×7 | 28 | `[225,253)` |
| [`ring.tip`](#ring-tip) | 8×7 | 37 | `[253,290)` |
| [`ring.pad`](#ring-pad) | 4×7 | 28 | `[290,318)` |
| [`ring.root`](#ring-root) | 4×7 | 28 | `[318,346)` |
| [`pinky.tip`](#pinky-tip) | 8×7 | 39 | `[346,385)` |
| [`pinky.middle`](#pinky-middle) | 4×7 | 28 | `[385,413)` |
| [`pinky.root`](#pinky-root) | 4×7 | 25 | `[413,438)` |
| [`palm.surface`](#palm-surface) | 30×20 | 308 | `[438,746)` |

<a id="thumb-tip"></a>

## thumb.tip — Thumb tip

`8×7`; `38` valid points; local indices `1..38`; global slice `[0,38)`.

### Left hand

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  5,  6,  7,  8,  0,  0]
[ 9, 10, 11, 12,  0, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
[29, 30, 31, 32, 33, 34, 35]
[36,  0,  0,  0,  0, 37, 38]
```

### Right hand

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  0,  5,  6,  7,  8,  0]
[ 9, 10,  0, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
[29, 30, 31, 32, 33, 34, 35]
[36, 37,  0,  0,  0,  0, 38]
```

<a id="thumb-pad"></a>

## thumb.pad — Thumb pad

`4×7`; `28` valid points; local indices `1..28`; global slice `[38,66)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="index-tip"></a>

## index.tip — Index tip

`8×7`; `38` valid points; local indices `1..38`; global slice `[66,104)`.

### Left hand

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  0,  5,  6,  7,  0,  0]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
[29, 30, 31, 32, 33, 34, 35]
[36, 37,  0,  0,  0,  0, 38]
```

### Right hand

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  0,  5,  6,  7,  0,  0]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
[29, 30, 31, 32, 33, 34, 35]
[36,  0,  0,  0,  0, 37, 38]
```

<a id="index-pad"></a>

## index.pad — Index pad

`4×7`; `28` valid points; local indices `1..28`; global slice `[104,132)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="index-root"></a>

## index.root — Index root

`4×7`; `28` valid points; local indices `1..28`; global slice `[132,160)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="middle-tip"></a>

## middle.tip — Middle tip

`8×7`; `37` valid points; local indices `1..37`; global slice `[160,197)`.

Both hands.

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  0,  5,  6,  7,  0,  0]
[ 8,  0,  9, 10, 11,  0, 12]
[13, 14, 15, 16, 17, 18, 19]
[20, 21, 22, 23, 24, 25, 26]
[27, 28, 29, 30, 31, 32, 33]
[34, 35,  0,  0,  0, 36, 37]
```

<a id="middle-pad"></a>

## middle.pad — Middle pad

`4×7`; `28` valid points; local indices `1..28`; global slice `[197,225)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="middle-root"></a>

## middle.root — Middle root

`4×7`; `28` valid points; local indices `1..28`; global slice `[225,253)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="ring-tip"></a>

## ring.tip — Ring tip

`8×7`; `37` valid points; local indices `1..37`; global slice `[253,290)`.

Both hands.

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  0,  5,  6,  7,  0,  0]
[ 8,  0,  9, 10, 11,  0, 12]
[13, 14, 15, 16, 17, 18, 19]
[20, 21, 22, 23, 24, 25, 26]
[27, 28, 29, 30, 31, 32, 33]
[34, 35,  0,  0,  0, 36, 37]
```

<a id="ring-pad"></a>

## ring.pad — Ring pad

`4×7`; `28` valid points; local indices `1..28`; global slice `[290,318)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="ring-root"></a>

## ring.root — Ring root

`4×7`; `28` valid points; local indices `1..28`; global slice `[318,346)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="pinky-tip"></a>

## pinky.tip — Little-finger tip

`8×7`; `39` valid points; local indices `1..39`; global slice `[346,385)`.

### Left hand

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  5,  0,  6,  7,  8,  0]
[ 0,  0,  9, 10, 11,  0,  0]
[12, 13, 14, 15, 16, 17, 18]
[19, 20, 21, 22, 23, 24, 25]
[26, 27, 28, 29, 30, 31, 32]
[33, 34, 35, 36, 37, 38, 39]
```

### Right hand

```text
[ 0,  0,  0,  1,  0,  0,  0]
[ 0,  2,  0,  3,  0,  4,  0]
[ 0,  5,  6,  7,  0,  8,  0]
[ 0,  0,  9, 10, 11,  0,  0]
[12, 13, 14, 15, 16, 17, 18]
[19, 20, 21, 22, 23, 24, 25]
[26, 27, 28, 29, 30, 31, 32]
[33, 34, 35, 36, 37, 38, 39]
```

<a id="pinky-middle"></a>

## pinky.middle — Little-finger middle

`4×7`; `28` valid points; local indices `1..28`; global slice `[385,413)`.

Both hands.

```text
[ 1,  2,  3,  4,  5,  6,  7]
[ 8,  9, 10, 11, 12, 13, 14]
[15, 16, 17, 18, 19, 20, 21]
[22, 23, 24, 25, 26, 27, 28]
```

<a id="pinky-root"></a>

## pinky.root — Little-finger root

`4×7`; `25` valid points; local indices `1..25`; global slice `[413,438)`.

Both hands.

```text
[ 1,  2,  0,  0,  0,  3,  4]
[ 5,  6,  7,  8,  9, 10, 11]
[12, 13, 14, 15, 16, 17, 18]
[19, 20, 21, 22, 23, 24, 25]
```

<a id="palm-surface"></a>

## palm.surface — Palm surface

`30×20`; `308` valid points; local indices `1..308`; global slice `[438,746)`.

### Left hand

```text
[  0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0,   0,   0,   5,   6,   7,   8,   9,  10,  11,  12,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,   0,   0,   0,   0,   0,   0,   0]
[ 46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,   0,   0,   0,   0,   0,   0,   0,   0]
[ 58,  59,  60,  61,  62,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[ 63,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65,  66,  67,  68,  69,   0,   0,   0,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  70,  71,  72,  73,  74,  75,  76,  77,   0,   0]
[  0,  78,  79,   0,   0,   0,   0,   0,   0,   0,  80,  81,  82,  83,  84,  85,  86,  87,  88,   0]
[  0,  89,  90,  91,   0,   0,   0,   0,   0,   0,   0,  92,  93,  94,  95,  96,  97,  98,  99,   0]
[100, 101, 102, 103, 104,   0,   0,   0,   0,   0,   0, 105, 106, 107, 108, 109, 110, 111, 112, 113]
[114, 115, 116, 117, 118, 119,   0,   0,   0,   0,   0, 120, 121, 122, 123, 124, 125, 126, 127, 128]
[  0, 129, 130, 131, 132, 133, 134,   0,   0,   0,   0,   0, 135, 136, 137, 138, 139, 140, 141, 142]
[  0, 143, 144, 145, 146, 147, 148,   0,   0,   0,   0,   0, 149, 150, 151, 152, 153, 154, 155, 156]
[157, 158, 159, 160, 161, 162, 163, 164,   0,   0,   0,   0, 165, 166, 167, 168, 169, 170, 171,   0]
[172, 173, 174, 175, 176, 177, 178, 179,   0,   0,   0,   0,   0, 180, 181, 182, 183, 184, 185,   0]
[186, 187, 188, 189, 190, 191, 192, 193, 194,   0,   0,   0,   0, 195, 196, 197, 198, 199, 200,   0]
[201, 202, 203, 204, 205, 206, 207, 208, 209,   0,   0,   0,   0, 210, 211, 212, 213, 214,   0,   0]
[215, 216, 217, 218, 219, 220, 221, 222, 223,   0,   0,   0,   0, 224, 225, 226, 227,   0,   0,   0]
[228, 229, 230, 231, 232, 233, 234, 235, 236,   0,   0,   0,   0,   0, 237, 238,   0,   0,   0,   0]
[239, 240, 241, 242, 243, 244, 245, 246, 247, 248,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[249, 250, 251, 252, 253, 254, 255, 256, 257, 258,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[259, 260, 261, 262, 263, 264, 265, 266, 267, 268,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[269, 270, 271, 272, 273, 274, 275, 276, 277, 278,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0, 279, 280, 281, 282, 283, 284, 285, 286, 287,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0, 288, 289, 290, 291, 292, 293, 294, 295,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0, 296, 297, 298, 299, 300, 301, 302, 303,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0,   0,   0, 304, 305, 306, 307, 308,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
```

### Right hand

```text
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   4,   0,   0,   0,   0,   0,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,   5,   6,   7,   8,   9,  10,  11,  12,   0,   0,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,   0]
[  0,   0,   0,   0,   0,   0,   0,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58,  59,  60,  61,  62]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63,  64]
[  0,   0,   0,   0,   0,  65,  66,  67,  68,  69,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,   0,  70,  71,  72,  73,  74,  75,  76,  77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0]
[  0,  78,  79,  80,  81,  82,  83,  84,  85,  86,   0,   0,   0,   0,   0,   0,   0,  87,  88,   0]
[  0,  89,  90,  91,  92,  93,  94,  95,  96,   0,   0,   0,   0,   0,   0,   0,  97,  98,  99,   0]
[100, 101, 102, 103, 104, 105, 106, 107, 108,   0,   0,   0,   0,   0,   0, 109, 110, 111, 112, 113]
[114, 115, 116, 117, 118, 119, 120, 121, 122,   0,   0,   0,   0,   0, 123, 124, 125, 126, 127, 128]
[129, 130, 131, 132, 133, 134, 135, 136,   0,   0,   0,   0,   0, 137, 138, 139, 140, 141, 142,   0]
[143, 144, 145, 146, 147, 148, 149, 150,   0,   0,   0,   0,   0, 151, 152, 153, 154, 155, 156,   0]
[  0, 157, 158, 159, 160, 161, 162, 163,   0,   0,   0,   0, 164, 165, 166, 167, 168, 169, 170, 171]
[  0, 172, 173, 174, 175, 176, 177,   0,   0,   0,   0,   0, 178, 179, 180, 181, 182, 183, 184, 185]
[  0, 186, 187, 188, 189, 190, 191,   0,   0,   0,   0, 192, 193, 194, 195, 196, 197, 198, 199, 200]
[  0,   0, 201, 202, 203, 204, 205,   0,   0,   0,   0, 206, 207, 208, 209, 210, 211, 212, 213, 214]
[  0,   0,   0, 215, 216, 217, 218,   0,   0,   0,   0, 219, 220, 221, 222, 223, 224, 225, 226, 227]
[  0,   0,   0,   0, 228, 229,   0,   0,   0,   0,   0, 230, 231, 232, 233, 234, 235, 236, 237, 238]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 279, 280, 281, 282, 283, 284, 285, 286, 287,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 288, 289, 290, 291, 292, 293, 294, 295,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 296, 297, 298, 299, 300, 301, 302, 303,   0,   0]
[  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 304, 305, 306, 307, 308,   0,   0,   0,   0]
```
