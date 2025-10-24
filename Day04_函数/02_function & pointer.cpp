//
// Created by 梁俊可 on 2025/10/24.
//
#include <iostream>
using namespace std;
//函数指针
void test_function1(int (*func)(int,int)) {
    cout << "result1:"<<func(10,20)<<endl;
}
//函数对象，function包装器==>更常用
void test_function2(function<int(int, int)> fun, int a, int b, int c) {
    int result=fun(a, b);
    result+=c;
    cout << "result2:" << result << endl;
}

int add(int a,int b) {
    return a+b;
}
int multiply(int a,int b) {
    return a*b;
}

// int main() {
//     test_function1(add);
//     test_function2(add,10,20,30);
//
//     test_function1(multiply);
//     test_function2(multiply,10,20,30);
// }