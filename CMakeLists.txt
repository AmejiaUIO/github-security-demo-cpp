cmake_minimum_required(VERSION 3.15)
project(github_security_demo_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ZLIB REQUIRED)

add_executable(demo main.cpp)
target_link_libraries(demo PRIVATE ZLIB::ZLIB)
