#include <iostream>
using namespace std;
// 测试输出“Hello World”
void print_hello() {
    cout << "Hello, World!" << endl; //cout: c output
}
//测试输入输出
void testIO();//函数声明

// 测试输入两个数字的和
int testAdd(int a, int b);

int main() {
    //print_hello();
    //testIO();
    cout << "请输入两个数字：";
    int a, b;
    cin >> a >> b;
    cout << "两个数的和为：" << testAdd(a, b);

}
//测试输入输出
void testIO() {//函数定义
    int age;
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your age: ";
    //控程序获取输入
    cin >> age; //回车后，制台权限交给程序。继续运行.------“用户输入缓冲区”，程序与“用户输入缓冲区”打交道，不直接与用户打交道

    cout << "Your name is: " << name << "，\t";
    cout << "Your age is: " << age << endl;
}

//测试输入两个数字的和
int testAdd(const int a, const int b) {//为什么使用 const？
    return  a + b;
}

