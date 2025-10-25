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
        "Day02_数据类型/02_compound_types_01_reference_type.cpp"
        "Day02_数据类型/03_derived_types_01_class&struct .cpp"
        Day03_表达式/02_if_statement.cpp
        Day03_表达式/03_switch_statement.cpp
        Day03_表达式/04_while_statement.cpp
        Day03_表达式/05_for_statement.cpp
        Day03_表达式/06_range_for_statement.cpp
        Day03_表达式/07_break&continue&goto.cpp
        "Day03_表达式/08_try block & throw expression.cpp"
        Day04_函数/01_function.cpp
        Day02_数据类型/02_compound_types_02_pointer_type.cpp
        Day02_数据类型/02_compound_types_03_array_type.cpp
        Day02_数据类型/02_compound_types_04_funtion_type.cpp
        Day02_数据类型/03_derived_types_02_enum&enum_class.cpp
        "Day02_数据类型/03_derived_types_03_union .cpp"
        "Day04_函数/02_function & pointer.cpp"
        Day05_类（面向对象）/01_encapsulation.cpp
        Day05_类（面向对象）/02_extend.cpp
        Day05_类（面向对象）/03_polymorphic.cpp
        "Day05_类（面向对象）/00_shallow_copy & deep_copy_01.cpp"
        "Day05_类（面向对象）/00_shallow_copy & deep_copy_02.cpp"
)
