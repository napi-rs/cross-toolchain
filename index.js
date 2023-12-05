const { mkdirSync, rmSync, readFileSync } = require('node:fs')
const { execSync } = require('node:child_process')
const { join } = require('node:path')
const { unzipSync } = require('node:zlib')

const { version } = require('./package.json')

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
  'x86_64-unknown-linux-gnu': arm64TargetX86_64,
}

module.exports.x64 = {
  'armv7-unknown-linux-gnueabihf': x64TargetArmv7,
  'aarch64-unknown-linux-gnu': x64TargetAarch64,
  'x86_64-unknown-linux-gnu': x64TargetX86_64,
}

module.exports.version = version

const packages = {
  arm64: {
    'armv7-unknown-linux-gnueabihf':
      '@napi-rs/cross-toolchain-arm64-target-armv7',
    'aarch64-unknown-linux-gnu':
      '@napi-rs/cross-toolchain-arm64-target-aarch64',
    'x86_64-unknown-linux-gnu': '@napi-rs/cross-toolchain-arm64-target-x86_64',
  },
  x64: {
    'armv7-unknown-linux-gnueabihf':
      '@napi-rs/cross-toolchain-x64-target-armv7',
    'aarch64-unknown-linux-gnu': '@napi-rs/cross-toolchain-x64-target-aarch64',
    'x86_64-unknown-linux-gnu': '@napi-rs/cross-toolchain-x64-target-x86_64',
  },
}

module.exports.download = function download(arch, triple) {
  const { Archive } = require('@napi-rs/tar')
  const { xz: { decompressSync } } = require('@napi-rs/lzma')
  const debug = require('debug')('napi:cross-toolchain')

  const downloadPackage = packages[arch][triple]
  if (!downloadPackage) {
    throw new Error(`Unsupported arch: ${arch} triple: ${triple}`)
  }
  debug(`Downloading ${downloadPackage}@${version} via npm pack ...`)
  execSync(`npm pack ${downloadPackage}@${version}`, {
    stdio: 'inherit',
    cwd: __dirname,
    env: process.env,
  })
  const tgzFile = `${downloadPackage.replace(
    '@napi-rs/',
    'napi-rs-'
  )}-${version}.tgz`
  const tar = unzipSync(readFileSync(join(__dirname, tgzFile)))
  const archive = new Archive(tar)
  const dest = join(__dirname, 'toolchain', arch, triple)
  mkdirSync(dest, { recursive: true })
  debug(`Unpacking ${tgzFile} ...`)
  archive.unpack(dest)
  rmSync(join(__dirname, tgzFile))
  const xzFile = join(dest, 'package', `${triple}.tar.xz`)
  debug(`Decompressing ${xzFile} ...`)
  const decompressed = decompressSync(readFileSync(xzFile))
  debug(`Reading Archive ${xzFile} ...`)
  const destArchive = new Archive(decompressed)
  return destArchive
}
