//
// Created by 梁俊可 on 2025/10/23.
//
//一条声明语句由一个基本数据类型（base type）和一个声明符(declarator)列表组成。

/*
    1. 基本数据类型（Basic Types）
        整型：int、short、long、long long、char、bool
        浮点型：float、double、long double
        字符型：char、wchar_t、char16_t、char32_t
        布尔型：bool
        空类型：void
    类型修饰符
        存储类别：auto、register、static、extern、mutable
        访问控制：public、private、protected
        其他修饰符：const、volatile、constexpr
*/
#include <iostream>
using namespace std;
void basic_types() {
    wchar_t a=L'a';
    wcout << a << endl;
    cout << sizeof(a) << endl;
    char16_t b=u'b';
    cout << sizeof(b) << endl;
    char32_t c=U'c';
    cout << sizeof(c) << endl;
}
// int main() {
//     basic_types();
// }