//
// Created by 梁俊可 on 2025/10/23.
//
/*
    try block & throw expression
    try {
        program-statements;
    }catch (exception-declaration) {//捕获异常
        handler-statements;
    }
*/
#include <iostream>
#include <stdexcept>
using namespace std;
//调试运行
void test() {
    try {
        int a = 0;
        int b = 10;
        //预防除零错误
        if (a == 0) {
            throw runtime_error("除数不能为0");
        }
        int c = b / a;
        cout << c << endl;
    } catch (const runtime_error& error) {
        cout << error.what();
        // 不再重新抛出异常，或者根据需要正确处理异常传播
    }
}

// int main() {
//     test();
// }