#include <iostream>
using namespace std;
//
// Created by 梁俊可 on 2025/10/22.
//
void test_printf01();
void test_scanf02();
// int main() {
//     test_printf01();
//     test_scanf02();
// }

void test_printf01() {
    /*
        * 占位符：%d,%c,%f,%s
        *  %d: 整数, %c: 字符, %f: 浮点数, %s: 字符串
     */
    cout << "--------------01、基本IO----------------" << endl;
    int a;
    int b;
    printf("请输入两个数字：");
    scanf("%d%d", &a, &b);//&a 表示变量 a 的内存地址（地址运算符）
    printf("两个数字的和为：%d", a + b);
    cout << endl;
    printf("请再输入两个数字：");
    scanf("%d %d", &a, &b);//&a 表示变量 a 的内存地址（地址运算符）
    printf("两个数字的和为：%d", a + b);
    cout << endl;
}
void test_scanf02() {
    /*
    1. 语言风格
        scanf: C语言风格的输入函数
        cin: C++语言风格的输入流对象
    2. 类型安全性
        scanf: 无类型检查，容易出现类型不匹配错误
        cin: 具有类型安全检查，编译时能捕获更多错误
     */
    cout << "--------------02、占位符----------------" << endl;
    // printf("请输入一个字符：");
    // char c;
    // scanf("%c", &c);
    // printf("你输入的字符是：%c\n", c);
    //
    // printf("请输入一个浮点数：");
    // float f;
    // scanf("%f", &f);
    // printf("你输入的浮点数是：%f\n", f);

    printf("请输入一个字符串：");
    char s1[100];
    scanf("%s", s1);
    printf("你输入的字符串是：%s\n", s1);

    // printf("请再输入一个字符串(存在bug)：");
    // string s2;
    // scanf("%s", &s2);
    //printf("你输入的字符串是：%s\n", s2.c_str());//s.c_str() 获取对应的 C 风格字符串指针
    //s2.c_str()：获取对应的 C 风格字符串指针，第一个输入的字符被删掉了？
    //cout << "你输入的字符串是：" << s2 << endl;
    // 注意：scanf() 函数在输入字符串时，会忽略掉输入的字符串末尾的换行符（\n）。
    // 因此，如果希望在输入字符串时保留换行符，可以使用 gets() 函数。

}