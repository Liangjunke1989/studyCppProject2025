//
// Created by 梁俊可 on 2025/10/23.
//

/*
    1、if statement
    if (condition) {
        statement;
    }

    2、if else statement
    if (condition) {
        statement;
    }else
        statement;

    3、if else if statement
    if (condition) {
        statement;
    }else if (condition) {
        statement;
    }
    else
        statement;

    4、三目运算符（ternary operator 或 conditional operator）
        ：condition ? statement1 : statement2;
*/
#include <iostream>
using namespace std;
void ternary_operator() {
    int a = 1;
    cout << (a > 0 ? "a > 0" : "a <= 0") << endl;
}
// int main() {
// }