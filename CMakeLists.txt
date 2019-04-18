cmake_minimum_required(VERSION 3.5)

project(dfa_sim)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(dfa_sim ../source/DFA.c++)
