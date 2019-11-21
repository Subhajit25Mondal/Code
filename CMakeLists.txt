cmake_minimum_required(VERSION 3.15)
project(c1)

set(CMAKE_CXX_STANDARD 14)

add_executable(c1 main.cpp)
add_executable(guess guess.cpp)
add_executable(gcd gcd.cpp)
add_executable(animals animals.cpp)
add_executable(single_file_exec "global functions.cpp")
