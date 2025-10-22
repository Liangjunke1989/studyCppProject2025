#include <iostream>
using namespace std;
// 第一个测试函数
void print_hello() {
    cout << "Hello, World!" << endl; //cout: c output
}
void testIO();//函数声明
int main() {
    print_hello();
    testIO();
}
//测试输入输出
void testIO() {//函数定义
    int age;
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Your name is: " << name << "，\t";
    cout << "Your age is: " << age << endl;

}

