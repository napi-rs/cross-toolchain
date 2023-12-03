import { execSync } from 'node:child_process'
import { rmSync, renameSync, writeFileSync, readFileSync } from 'node:fs'
import { join } from 'node:path'
import { fileURLToPath } from 'node:url'

import { omit } from 'lodash-es'

import rootPkgJson from './package.json' assert { type: 'json' }

const __dirname = join(fileURLToPath(import.meta.url), '..')

const LICENSE = readFileSync(join(__dirname, 'LICENSE'), 'utf8')

const hosts = [
  {
    name: 'amd64',
    nameInNode: 'x64',
  },
  {
    name: 'arm64',
    nameInNode: 'arm64',
  },
]
const targets = [
  {
    name: 'x86_64-unknown-linux-gnu',
    tag: 'x86_64',
  },
  {
    name: 'aarch64-unknown-linux-gnu',
    tag: 'aarch64',
  },
  {
    name: 'armv7-unknown-linux-gnueabihf',
    tag: 'armv7',
  },
]

for (const host of hosts) {
  for (const target of targets) {
    execSync(
      `docker run --rm --platform=linux/${host.name} -v "$(pwd)/${host.nameInNode}":/${host.nameInNode} messense/manylinux2014-cross:${target.tag} bash -c "tar -cvf /${host.nameInNode}/${target.name}.tar /usr/${target.name}"`,
      {
        encoding: 'utf8',
        stdio: 'inherit',
      }
    )
    rmSync(join(__dirname, host.nameInNode, target.name), {
      recursive: true,
      force: true,
    })
    execSync(
      `tar -xvf ${join(__dirname, host.nameInNode, `${target.name}.tar`)} -C ${join(
        __dirname,
        host.nameInNode
      )}`
    )
    renameSync(
      join(__dirname, host.nameInNode, `usr/${target.name}`),
      join(__dirname, host.nameInNode, target.name)
    )
    rmSync(join(__dirname, host.nameInNode, target.name, 'build.log.bz2'), {
      force: true,
    })
    const pkgJson = {
      name: `@napi-rs/cross-toolchain-${host.nameInNode}-target-${target.tag}`,
      cpu: [host.nameInNode],
      ...omit(rootPkgJson, 'name', 'cpu', 'dependencies', 'devDependencies', 'files', 'workspaces', 'packageManager'),
    }

    writeFileSync(
      join(__dirname, host.nameInNode, target.name, 'package.json'),
      JSON.stringify(pkgJson, null, 2)
    )

    writeFileSync(join(__dirname, host.nameInNode, target.name, 'LICENSE'), LICENSE)

    rmSync(join(__dirname, host.nameInNode, `${target.name}.tar`))
  }
  rmSync(join(__dirname, host.nameInNode, 'usr'), { recursive: true, force: true })
}
