# Optional Android hand display data

The tactile JSON files match the SDK algorithm assets, using schema 2, metres,
and the stable 746-channel SDK order. Both thumb modules use the supplier CAD
registration verified in OmniGlove Toolbox. HTAC v1 stores the same points and
landmark bindings in little-endian float32 form. Palm points already contain the
nominal wrist-frame rotation. Finger points retain their landmark-local frame.

HKIN v1 contains only the nominal URDF finger chains and toolbox IK constraints,
in little-endian float64 form. It contains no personal calibration. The demo
reads BONE v4 from the selected device, binds its TX/RX transforms, roots and
segment lengths to the connection generation, and independently solves POSE.
The roots are first-joint translations in the palm parent frame. FK applies
the wrist-to-palm transform before placing them in SDK wrist coordinates.
The Java solver uses bounded damped least squares with position, orientation,
neutral-pose and temporal residuals. It follows the toolbox display objective;
it does not depend on MuJoCo, Qt or SciPy, or claim bit-identical optimizer output.
NumPy/SciPy fixtures validate the independent coordinate and optimization result.
Converged bounded fits remain visible as in toolbox; a positional residual of
10 mm or more produces a warning. Invalid sensor data or a failed optimizer
holds the previous pose and reports its cause.

Regenerate with `scripts/generate_android_hand_assets.py --reference-root
<reference-hand-runtime> --output <this-directory>`. Use the Toolbox URDF and IK
constraints with the SDK algorithm JSON files under `assets/tactile/` in that
reference root. The manifest records the source and generated SHA-256 hashes.
These display resources belong only to the optional demo. Bone mesh attribution
remains in `../hand_bones/`.
