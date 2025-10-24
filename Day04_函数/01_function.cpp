//
// Created by 梁俊可 on 2025/10/23.
//
#include <iostream>
using namespace std;
void test_function1() {
    cout << "hello world" << endl;
}
void test_function2(int a) {
    cout << "a:" << a << endl;
}
int test_function3(int a, int b) {
    cout << "test_function3:" << a+b << endl;
    return a + b;
}
void test_function4(function<void()> fun) {
    fun();
}
void test_function5(function<void(int)> fun, int a) {
    fun(a);
}
void test_function6(function<int(int, int)> fun, int a, int b) {
    int result=fun(a, b);
    cout << "result6:" << result << endl;
}
void test_function6(function<int(int, int)> fun, int a, int b, int c) {
    int result=fun(a, b);
    result+=c;
    cout << "result66:" << result << endl;
}
// int main() {
//     cout << "---------------01、Func01-----------------" << endl;
//     test_function1();
//     test_function2(10);
//     test_function3(10, 20);
//     cout << "---------------02、Func02-----------------" << endl;
//     test_function4(test_function1);
//     test_function5(test_function2, 10);
//     test_function6(test_function3, 10, 20);
//     test_function6(test_function3, 10, 20, 30);
// }