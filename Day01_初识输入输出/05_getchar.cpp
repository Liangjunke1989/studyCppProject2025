//
// Created by 梁俊可 on 2025/10/22.
//
#include <iostream>
using namespace std;
//输入缓冲区：键盘输入的字符会存储在输入缓冲区中，直到按下回车键或者调用getchar()函数时才会被读取。
void test_getchar() {
    int c = getchar(); // 使用int类型接收getchar()返回值
    if (c != EOF) {
        // 检查是否成功读取字符
        cout << "读取到字符的ASCII码: " << c << endl;
        cout << "转换为字符格式为:" << char(c) << endl;
        cout << "读取到字符: " << static_cast<char>(c) << endl; //static_cast<char>(c): 将int类型转换为char类型
    } else {
        cout << "未读取到有效字符" << endl;
    }
    // 输出字符
    cout << "-------putchar_int--------- " << endl;
    putchar(c); //输出字符,putchar()函数将字符输出到屏幕上，并返回该字符的ASCII码。
    cout << endl;
    cout << putchar(c)<< endl;//先打印c,再打印putchar？？
    //执行过程：
    //putchar(c) 输出字符 A 到屏幕
    //putchar(c) 返回整数值 65
    //cout 输出 65 并换行
    cout << "-------putchar_char--------- " << endl;
    putchar(static_cast<char>(c));
    cout << endl;
    cout << putchar(static_cast<char>(c))<< endl;//先打印c,再打印putchar？？

    // 清理输入缓冲区中的剩余字符
    while (c != '\n' && c != EOF) {
        // 在清理输入缓冲区时，循环会一直执行到读取到 '\n' 或 EOF
        c = getchar();
    } //循环结束后，c 的值是 '\n'（换行符）
}

int main() {
    cout << "请输入一个字符: ";
    test_getchar();
    cout << "请再输入一个字符: ";
    test_getchar();
}
