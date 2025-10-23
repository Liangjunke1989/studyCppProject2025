cmake_minimum_required(VERSION 3.29)
project(LJK_CPPWorkspace)

set(CMAKE_CXX_STANDARD 20)

add_executable(LJK_CPPWorkspace Day01_初识输入输出/01_IO.cpp
        Day01_初识输入输出/02_character.cpp
        Day01_初识输入输出/02_character.h
        Day01_初识输入输出/03_const.cpp
        "Day01_初识输入输出/04_scanf&printf.cpp"
        Day01_初识输入输出/05_getchar.cpp
        Day03_表达式/01_operator.cpp
        "Day02_数据类型/01_basic_types.cpp"
        "Day02_数据类型/02_compound_types.cpp"
        "Day02_数据类型/03_derived_types.cpp"
        Day03_表达式/02_if_statement.cpp
        Day03_表达式/03_switch_statement.cpp
        Day03_表达式/04_while_statement.cpp
        Day03_表达式/05_for_statement.cpp
        Day03_表达式/06_range_for_statement.cpp
        Day03_表达式/07_break&continue&goto.cpp
)
