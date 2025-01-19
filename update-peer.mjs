import { writeFileSync } from 'node:fs'
import { join } from 'node:path'
import { fileURLToPath } from 'node:url'

import rootPkgJson from './package.json' with { type: 'json' }

const __dirname = join(fileURLToPath(import.meta.url), '..')

rootPkgJson.peerDependencies = Object.keys(rootPkgJson.peerDependencies).reduce((acc, name) => {
  acc[name] = `^${rootPkgJson.version}`
  return acc
}, {})

writeFileSync(join(__dirname, 'package.json'), JSON.stringify(rootPkgJson, null, 2) + '\n', 'utf8')
