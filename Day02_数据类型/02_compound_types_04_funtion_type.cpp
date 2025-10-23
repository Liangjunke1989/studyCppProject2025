//
// Created by 梁俊可 on 2025/10/23.

#include <iostream>
using namespace std;
// 方法的重载
class LJK_Calculator {
public:
    int add(int a, int b);                  // 参数个数不同
    double add(double a, double b);         // 参数类型不同
    int add(int a, int b, int c);           // 参数个数不同
};
int LJK_Calculator::add(int a, int b) {
    return a + b;
}
double LJK_Calculator::add(double a, double b) {
    return a + b;
}
int LJK_Calculator::add(int a, int b, int c) {
    return a + b + c;
}
void test_overload() {
    /*
    1. 栈上分配（Stack Allocation）
        直接声明对象变量，对象在栈上创建
        不需要使用new关键字
        对象生命周期由作用域自动管理
    2. 堆上分配（Heap Allocation）
        使用new关键字在堆上创建对象
        需要手动管理内存，使用delete释放
        返回对象指针
     */
    LJK_Calculator calc;//创建对象，实例化对象不用new？ 栈上分配，无需new
    cout<<calc.add(1,2)<<endl;
    cout<<calc.add(1.1,2.2)<<endl;
    cout<<calc.add(1,2,3)<<endl;
}
// int main() {
//     test_overload();
// }
