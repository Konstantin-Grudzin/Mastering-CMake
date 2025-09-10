cmake_minimum_required(VERSION 3.28)


message("=== CMakeLists.txt STARTED ===")

set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)
project(Exercise_1 VERSION ${Tutorial_VERSION_MAJOR}.${Tutorial_VERSION_MINOR})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(sqr Sqroot.cpp)

message("${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories(sqr PUBLIC
                           "${CMAKE_CURRENT_SOURCE_DIR}"
                           )

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/Sqroot.h.in" "${CMAKE_CURRENT_SOURCE_DIR}/Sqroot.h")