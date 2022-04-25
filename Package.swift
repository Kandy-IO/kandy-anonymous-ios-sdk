// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MobileSDKAnonymous",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "MobileSDKAnonymous",
            targets: ["SDKWebRTC","Dependencies","MobileSDKAnonymous"]),
    ],
    dependencies: [
        .package(url: "https://github.com/Kandy-IO/kandy-ios-webrtc.git", branch: "master"),
    ],
    targets: [
        .target(name: "SDKWebRTC",
                dependencies: [.product(name: "WebRTC", package: "kandy-ios-webrtc")]),
        
            .target(
                name: "Dependencies",
                cSettings: [
                    .define("OTHER_LDFLAGS",to: "-ObjC"),
                    .define("ENABLE_BITCODE", to: "NO")
                ],
                linkerSettings: [
                    .linkedFramework("AudioToolbox"),
                    .linkedFramework("VideoToolbox"),
                    .linkedFramework("SystemConfiguration"),
                    .linkedFramework("AVFoundation"),
                    .linkedFramework("GLKit"),
                    .linkedFramework("PushKit"),
                    .linkedLibrary("c++"),
                    .linkedLibrary("z"),
                    .linkedLibrary("icucore"),
                ]
            ),
        
            .binaryTarget(name: "MobileSDKAnonymous",
                          path: "MobileSDKAnonymous.xcframework"),
        
    ]
)
