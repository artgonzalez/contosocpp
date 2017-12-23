SET(CMAKE_CXX_COMPILER /opt/rh/devtoolset-7/root/bin/c++)
cmake_minimum_required(VERSION 3.1)
project(contoso)

set(CMAKE_CXX_STANDARD 11)

add_executable(contoso_exe main.cpp)
target_link_libraries(contoso_exe)