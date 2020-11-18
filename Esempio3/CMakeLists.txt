cmake_minimum_required(VERSION 3.12)

project(testlib)

set (libshared_DIR ${CMAKE_CURRENT_SOURCE_DIR}/deps/testInstall)

message("sharedLib dependecy ${sharedlib_DIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

find_package(libshared REQUIRED)

message("include file ${LIBSHARED_INCLUDE_DIRS} ")

include_directories("${LIBSHARED_INCLUDE_DIRS}")

#link_directories(deps/testinstall/lib)

add_executable(testlib main.cpp)

message("sharedlib ${LIBSHARED_LIBS} ")

target_link_libraries(testlib "${LIBSHARED_LIBS}")




