let arm64TargetX86_64
let arm64TargetAarch64
let arm64TargetArmv7
let x64TargetX86_64
let x64TargetAarch64
let x64TargetArmv7

try {
  arm64TargetX86_64 =
    require('@napi-rs/cross-toolchain-arm64-target-x86_64').toolchainPath
} catch {
  // ignore
}
try {
  arm64TargetAarch64 =
    require('@napi-rs/cross-toolchain-arm64-target-aarch64').toolchainPath
} catch {
  // ignore
}
try {
  arm64TargetArmv7 =
    require('@napi-rs/cross-toolchain-arm64-target-armv7').toolchainPath
} catch {
  // ignore
}
try {
  x64TargetX86_64 =
    require('@napi-rs/cross-toolchain-x64-target-x86_64').toolchainPath
} catch {
  // ignore
}
try {
  x64TargetAarch64 =
    require('@napi-rs/cross-toolchain-x64-target-aarch64').toolchainPath
} catch {
  // ignore
}
try {
  x64TargetArmv7 =
    require('@napi-rs/cross-toolchain-x64-target-armv7').toolchainPath
} catch {
  // ignore
}

module.exports.arm64TargetX86_64 = arm64TargetX86_64
module.exports.arm64TargetAarch64 = arm64TargetAarch64
module.exports.arm64TargetArmv7 = arm64TargetArmv7
module.exports.x64TargetX86_64 = x64TargetX86_64
module.exports.x64TargetAarch64 = x64TargetAarch64
module.exports.x64TargetArmv7 = x64TargetArmv7
module.exports.arm64 = {
  'armv7-unknown-linux-gnueabihf': arm64TargetArmv7,
  'aarch64-unknown-linux-gnu': arm64TargetAarch64,
  'x86_64-unknown-linux-gnu': arm64TargetX86_64
}

module.exports.x64 = {
  'armv7-unknown-linux-gnueabihf': x64TargetArmv7,
  'aarch64-unknown-linux-gnu': x64TargetAarch64,
  'x86_64-unknown-linux-gnu': x64TargetX86_64
}
