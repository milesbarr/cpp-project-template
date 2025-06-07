# C++ Project Template

A modern C++ project template with a robust development environment and best
practices built-in.

## Features

- [Development Containers](https://containers.dev) for consistent development
  environments
- [CMake](https://cmake.org) build system
- [GoogleTest](https://github.com/google/googletest) for unit testing
- [Clang-Format](https://clang.llvm.org/docs/ClangFormat.html) for code
  formatting

## Project Structure

```
.
├── src/           # Source files
├── test/          # Test files
├── third_party/   # External dependencies
├── .devcontainer/ # Development container configuration
├── .github/       # GitHub Actions workflows
└── CMakeLists.txt # CMake build configuration
```

## Getting Started

### Prerequisites

- [Docker Desktop](https://www.docker.com/products/docker-desktop/)
- [VS Code](https://code.visualstudio.com) with the
  [Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)
  extension
- Git

### Development Setup

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/cpp-project-template.git
   cd cpp-project-template
   ```

2. Initialize and update submodules:
   ```bash
   git submodule update --init --recursive
   ```

3. Open in VS Code:
   ```bash
   code .
   ```

4. When prompted, click "Reopen in Container" to start development in the
   containerized environment.

### Building the Project

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Running Tests

```bash
cd build
ctest
```

## License

This project is licensed under the [MIT License](LICENSE).
