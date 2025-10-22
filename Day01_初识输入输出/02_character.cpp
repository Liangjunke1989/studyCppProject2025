//
// Created by 梁俊可 on 2025/10/22.
//

#include "02_character.h"
#include <iostream>
using namespace std;

void test_Character1();
void test_Character2();
void test_Character3();

// int main() {
//     test_Character1();
//     test_Character2();
//     test_Character3();
//     TestCharacter::test_Character();
// }

//基本char类型
void test_Character1() {
    cout << "------char01---------" << endl;
    const char a = 'a';
    const char b = 'b';
    const char c = 'c';
    cout << a << b << c << endl;
}
//char类型进阶
void test_Character2() {
    cout << "------char02---------" << endl;
    constexpr char a = 'a'; // char类型
    const char *b = "b"; // 字符指针类型
    auto b1 = "b1"; // char*，默认类型推导
    constexpr char c = *"c"; // char类型接收解引用的字符指针
    char d = *"中"; //char类型接收解引用的字符指针
    cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << endl;
    // cout << "Type of a: " << typeid(a).name() << endl; // 打印类型, 输出为char
    // cout << "Type of b: " << typeid(b).name() << endl; // 打印类型, 输出为char*
    // cout << "Type of b1: " << typeid(b1).name() << endl; // 打印类型, 输出为char*
    // cout << "Type of c: " << typeid(c).name() << endl; // 打印类型, 输出为char
    // cout << "Type of d: " << typeid(d).name() << endl; // 打印类型, 输出为char


}
//ASCII码
void test_Character3() {
    /*
     *  具体后面对此内容再拓展！！！
        char c = 'b';           // ✅ 正确：字符赋值给char变量
        char c = *"b";          // ⚠️ 危险：解引用字符串指针，可能不安全
        const char* str = "b";  // ✅ 正确：字符串赋值给字符指针
    */
    cout << "------ASCII码---------" << endl;
    char e = 97; //ASCII码 a
    constexpr char f = 65; //ASCII码 A
    cout << e << "\t" << f << "\t" << endl;

    constexpr char g = '0';//ASCII码 0
    constexpr char h = 0;//ASCII码 null
    constexpr char i = 48;//ASCII码 0
    cout << g << "\t" << h << "\t" << i <<  endl;
}
