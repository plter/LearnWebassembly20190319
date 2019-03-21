cmake_minimum_required(VERSION 3.13)
project(uievents)

set(CMAKE_CXX_STANDARD 14)
include_directories(/Work/lib/emsdk/emscripten/1.38.28/system/include)

add_executable(uievents main.cpp)