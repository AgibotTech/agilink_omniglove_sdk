# BodyParts3D hand bones for the Android demo

The two HBON v1 assets, their manifest and attribution notice are copied unchanged
from OmniGlove Toolbox `assets/models/bone/`. They contain 27 anatomical hand bones
and two short forearm meshes per side. The demo displays the hand bones only.

These meshes are derived from BodyParts3D, (c) The Database Center for Life Science,
under Creative Commons Attribution-Share Alike 2.1 Japan. Preserve
`LICENSE_BODYParts3D.txt`, this notice and the manifest when redistributing them.
The share-alike terms apply to the model assets. They do not change the SDK API.

Android reads the original little-endian HBON data, converts millimetres to metres,
and uses the original rest pose and link-local normals. Runtime POST positions
and quaternions drive the bones; longitudinal scaling and inverse scaling of
normals follow the toolbox attachment convention. No mesh geometry is modified.
