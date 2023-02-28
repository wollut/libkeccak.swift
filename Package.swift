// swift-tools-version:5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "libkeccak.swift",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(name: "libkeccak", targets: ["libkeccak"]),
    ],
    targets: [
        .target(
            name: "libkeccak",
            path: "Sources/libkeccak",
            exclude: [
                "keccak-tiny/do.sh",
                "keccak-tiny/keccak-tiny-unrolled.c",
                "keccak-tiny/README.markdown",
            ],
            sources: [
                "keccak-tiny",
            ],
            publicHeadersPath: "include"
        ),
    ]
)
