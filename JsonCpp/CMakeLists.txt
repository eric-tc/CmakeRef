cmake_minimum_required(VERSION 3.10)

set (CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_LIST_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(jsondump)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

find_package(jsoncpp CONFIG REQUIRED)

add_executable(jsondump main.cpp)

target_link_libraries(jsondump PRIVATE jsoncpp_static)