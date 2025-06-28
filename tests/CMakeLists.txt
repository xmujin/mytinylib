cmake_minimum_required(VERSION 3.30)
project(test_mytinylib)


add_executable(test_mytinylib arrayTests.c Unity/unity.c)

include_directories(test_mytinylib PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/Unity
)

# 链接主项目的 mytinylib 静态库
target_link_libraries(test_mytinylib mytinylib)

add_test(NAME test_array COMMAND test_mytinylib)