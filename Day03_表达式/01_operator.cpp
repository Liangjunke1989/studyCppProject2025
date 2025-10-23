//
// Created by 梁俊可 on 2025/10/23.
//
#include <iostream>
using namespace std;
//arithmetic operator 算术运算符
void arithmetic_operator() {
    //取余 求模
    int a = 10;
    cout << "取余：" << a % 3 << endl; //取余,10除以3的余数是1
    //取整
    cout << "取整：" << a / 3 << endl; //取整,10除以3的商是3
}

//logical operator 逻辑运算符
void logical_operator() {
    int res1 = 'a' + 0;
    int res2 = 'A' + 0;
    cout << "\'a\'的值为：" << res1 << endl;
    cout << "\'A\'的值为：" << res2 << endl;
    if (res1 > res2) {
        cout << "a的ASCII码值较大" << endl;
    } else {
        cout << "A的ASCII码值较大" << endl;
    }
}

//relational operators 关系运算符
void relational_operators() {
    int a = 10;
    int b = 20;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
}

//assignment operator 赋值运算符
void assignment_operator() {
    int a = 10;
    int b = 20;
    while (a < b) {
        ++a; //a自增1
        // a=a+1;  等同于 a+=1;

        /*  a++ 和 ++a 的区别：
            int a = 5;
            int result1 = a++;  // result1 = 5, a = 6
            int b = 5;
            int result2 = ++b;  // result2 = 6, b = 6
         */
        cout << "a的值为：" << a << endl;
        if (a == b) {
            cout << "a和b相等" << endl;
            break;
        }
    }
}

//bitwise operators位运算符
void bitwise_operators() {
    //位求反：~ - 对每一位进行取反操作
    //位与：& - 两个相应位都为1时，结果才为1
    //位或：| - 两个相应位中只要有一个为1，结果就为1
    //位异或：^ - 两个相应位不同时，结果为1
    //左移：<< - 将二进制位向左移动指定位置数
    //右移：>> - 将二进制位向右移动指定位置数
    //sizeof (): sizeof() 运算符用于返回变量或表达式的数据类型所占的字节数。
    //怎么由十进制转换为二进制

    int a = 5; // 二进制: 0101
    int b = 3; // 二进制: 0011
    cout << "a=5,十进制转换为二进制：" << bitset<8>(a) << endl;
    cout << "b=3,十进制转换为二进制：" << bitset<8>(b) << endl;
    cout << "位求反 ~a: " << bitset<8>(~a) << "\t二进制位：" << (~a) << endl; // 1010 = -6
    cout << "位与 a&b: " << bitset<8>(a & b) << "\t二进制位：" << (a & b) << endl; // 0001 = 1
    cout << "位或 a|b: " << bitset<8>(a | b) << "\t二进制位：" << (a | b) << endl; // 0111 = 7
    cout << "位异或 a^b: " << bitset<8>(a ^ b) << "\t二进制位：" << (a ^ b) << endl; // 0110 = 6
    cout << "左移 a<<1: " << bitset<8>(a << 1) << "\t二进制位：" << (a << 1) << endl; // 1010 = 10
    cout << "右移 a>>1: " << bitset<8>(a >> 1) << "\t二进制位：" << (a >> 1) << endl; // 0010 = 2
}

int main() {
    //arithmetic_operator();
    //logical_operator();
    //relational_operators();
    //assignment_operator();
    bitwise_operators();
    return 0;
}
