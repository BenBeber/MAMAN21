cmake_minimum_required(VERSION 3.16)
project(MAMAN21 C)

set(CMAKE_C_STANDARD 90)

add_executable(MAMAN21 mycomp.c complex.h complex.c Commands.c)