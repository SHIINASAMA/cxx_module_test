# 模块测试项目

最低构建系统要求：

- CMake 2.28
- Ninja 生成器

最低编译器要求：

- MSVC 14.34
- clang-16
- gcc-14

# 意外状况

> CMAKE_CXX_COMPILER_CLANG_SCAN_DEPS-NOTFOUND: not found

安装 clang-tools-16，其中的 `clang-scan-deps` 可执行文件是必须的