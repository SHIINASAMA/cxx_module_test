cmake_minimum_required(VERSION 3.28)
project(cxx_module_test)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

if (MSVC)
    add_compile_options(/utf-8)
endif ()

add_library(foo)
target_sources(foo
    PUBLIC
        FILE_SET CXX_MODULES FILES
        src/foo.cpp
        src/print.cpp
)

add_executable(cxx_module_test src/main.cpp)
target_link_libraries(cxx_module_test PRIVATE foo)
