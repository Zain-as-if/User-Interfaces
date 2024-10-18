cmake_minimum_required(VERSION 3.16)
project(lect03 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(circdemo circdemo.cpp circle.cpp)
add_executable(circdemo2 circdemo2.cpp circle2.cpp)
