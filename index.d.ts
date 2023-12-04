export const arm64TargetX86_64: string | undefined
export const arm64TargetAarch64: string | undefined
export const arm64TargetArmv7: string | undefined
export const x64TargetX86_64: string | undefined
export const x64TargetAarch64: string | undefined
export const x64TargetArmv7: string | undefined
export type PlatformToolchain = {
  [key in
    | 'armv7-unknown-linux-gnueabihf'
    | 'aarch64-unknown-linux-gnu'
    | 'x86_64-unknown-linux-gnu']: string | undefined
}
export const arm64: PlatformToolchain
export const x64: PlatformToolchain
