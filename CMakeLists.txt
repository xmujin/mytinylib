cmake_minimum_required(VERSION 3.30)
project(mytinylib)
add_library(mytinylib STATIC src/array.c)
target_include_directories(mytinylib PUBLIC include)

# 启用测试功能，并添加 tests 子目录
enable_testing()
add_subdirectory(tests)



