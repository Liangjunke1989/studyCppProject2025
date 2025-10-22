//
// Created by 梁俊可 on 2025/10/22.
//

#ifndef LJK_CPPWORKSPACE_02_CHARACTER_H
#define LJK_CPPWORKSPACE_02_CHARACTER_H
class ljk_character {
private:
    char value;
public:
    explicit ljk_character(char c) : value(c) {}
    char getValue() const { return value; }
};

#include <iostream>
using namespace std;
class TestCharacter {
private:
    char my_value;
public:
    // // 添加默认构造函数
    // TestCharacter() : value('\0') {}
    // 添加构造函数
    explicit TestCharacter(const char value)//explicit 禁止隐式转换
        : my_value(value) {//构造函数
        my_value=value;
    }
    static void test_Character() {
        cout << "-------类中的静态方法-------" << endl;
        constexpr char a = 'a';//编译时常量,运行时常量
        TestCharacter testInstance{a};//创建对象
        cout << testInstance.my_value << endl;
        constexpr char b ='b';//'b'与"b"的区别?
        testInstance.my_value = b;
        //testInstance.my_value = *"b";//*"b" 转换为char
        cout << testInstance.my_value << endl;
    }
};
#endif //LJK_CPPWORKSPACE_02_CHARACTER_H


