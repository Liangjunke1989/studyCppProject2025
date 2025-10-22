cmake_minimum_required(VERSION 3.29)
project(LJK_CPPWorkspace)

set(CMAKE_CXX_STANDARD 20)

add_executable(LJK_CPPWorkspace Day01_初识输入输出/01_IO.cpp
        Day01_初识输入输出/02_character.cpp
        Day01_初识输入输出/02_character.h
        Day01_初识输入输出/03_const.cpp
        "Day01_初识输入输出/04_scanf&printf.cpp")
