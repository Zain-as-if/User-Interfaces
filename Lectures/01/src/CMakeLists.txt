cmake_minimum_required(VERSION 3.6)
project(lect01 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(UTILS utils.hpp utils.cpp)

add_executable(example example.cpp)
add_executable(example2 example2.cpp)
add_executable(iodemo iodemo.cpp)
add_executable(iodemo2 iodemo2.cpp)
add_executable(stringdemo stringdemo.cpp)
add_executable(vecdemo vecdemo.cpp ${UTILS})
