//
// Created by 梁俊可 on 2025/10/23.
//
/*
    enum和enum class的区别？
    1. 作用域范围
        enum：枚举值暴露在外部作用域中，可能导致命名冲突
        enum class：枚举值作用域限定在枚举类型内部，需要使用作用域解析符::访问
    2. 类型安全性
        enum：隐式转换为整型，类型检查较弱
        enum class：强类型枚举，不能隐式转换为整型或其他类型
    3. 命名空间污染
        enum：枚举值直接进入包含作用域，可能造成命名冲突
        enum class：枚举值不会污染外部命名空间

*/
#include <iostream>
using namespace std;
//枚举类型
enum Color1 {
    red1 ,
    blue1,
    green1
};
//枚举类类型
enum class Color2 {
    red2 ,
    blue2,
    green2,
};
void test_enum() {
    Color1 color = red1;
    color = blue1;
    cout << "enum:"<<color<< endl;//1
}
void test_enum_class() {
    Color2 color = Color2::red2;
    color = Color2::green2;
    cout << "enum_class:"<<static_cast<int>(color)<< endl;//2
    //printf("enum_class:%d\n",color);
}
// int main() {
//     test_enum();
//     test_enum_class();
// }

