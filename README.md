# GitHub Security Demo (C++)

A deliberately vulnerable C++ demo app used to showcase three built-in
GitHub security features:

1. **Dependabot** — monitors `vcpkg.json`, which pins an old `builtin-baseline`
   commit (meaning outdated minimum versions of dependencies like `zlib`).
   Dependabot opens a PR bumping the baseline to a newer, patched snapshot.
2. **CodeQL (code scanning)** — flags a stack buffer overflow (unbounded
   `strcpy`) and a command injection vulnerability (`system()` call) in
   `main.cpp`.
3. **Secret scanning + push protection** — >> // NOTE: This is a FAKE Slack webhook URL used only for demonstrating
GitHub Secret Scanning. It is randomly generated and does not point to any real Slack workspace or channel.
in `config.h`, and blocks any new pushes containing similar patterns. Need to allow this secret and choose an option  then push and check alert status.

⚠️ This project is intentionally insecure. Do not deploy it or reuse this
code in a real application. All "secrets" here are fake, publicly
documented example values.

## Build locally (Windows, with vcpkg + CMake + MSVC Build Tools installed)

```powershell
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=C:\vcpkg\scripts\buildsystems\vcpkg.cmake
cmake --build build
.\build\Debug\demo.exe test
```
