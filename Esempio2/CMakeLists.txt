cmake_minimum_required(VERSION 3.5)

project(interface)

set(CMAKE_CXX_STANDARD 11)

#@add_library(modelInterface INTERFACE)



add_library(classification SHARED src/classification.cpp src/classification.h)


#target_include_directories(modelInterface INTERFACE
#src)

add_executable(interface main.cpp)

target_link_libraries(interface classification)