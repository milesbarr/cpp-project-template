# C++ Project Template

A modern, opinionated C++ project template designed to help you quickly start
your next project.

## Features

- Configured for [Visual Studio Code](https://code.visualstudio.com).
- Consistent development environments with
  [Development Containers](https://containers.dev).
  environments.
- Build system with [CMake](https://cmake.org).
- Unit testing with [GoogleTest](https://github.com/google/googletest).
- Benchmarking with [Google Benchmark](https://github.com/google/benchmark).
- Code formatting with
  [Clang-Format](https://clang.llvm.org/docs/ClangFormat.html).

## Project Structure

```
.
├── src/          # Source files
├── test/         # Test files
└── third_party/  # External dependencies
```

## Getting Started

### Prerequisites

- Git
- [Docker Desktop](https://www.docker.com/products/docker-desktop/)
- [Visual Studio Code](https://code.visualstudio.com)
- [Dev Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

### Development Setup

1. Clone the repository:
   ```bash
   git clone https://github.com/milesbarr/cpp-project-template.git
   cd cpp-project-template
   ```
2. Launch [Visual Studio Code](https://code.visualstudio.com) and open the
   project folder.
3. When prompted, click "Reopen in Container"
4. Start coding!

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
