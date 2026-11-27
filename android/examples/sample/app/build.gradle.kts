plugins { id("com.android.application") }
android {
    namespace = "com.agilink.omniglove.sample"
    compileSdk = 35
    defaultConfig { applicationId = "com.agilink.omniglove.sample"; minSdk = 23; targetSdk = 35; versionCode = 1; versionName = "1.0.1" }
    compileOptions { sourceCompatibility = JavaVersion.VERSION_1_8; targetCompatibility = JavaVersion.VERSION_1_8 }
}
dependencies { implementation(files("../../../aar/omniglove-1.0.1.aar")) }
