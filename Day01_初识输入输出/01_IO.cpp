// 学习输入
#include <iostream>
using namespace std;

void testHello(); //函数声明
void testIOFunction(); //函数声明
void testIOFunction2();

int main() {
    //testHello();
    //testIOFunction();
    testIOFunction2();
    //return 0;
}

// 函数定义：Hello World
void testHello() {
    //函数定义
    cout << "Hello, World!" << endl; //cout: c output
    cout << "\tI am learning cpp01" << endl; //endl: new line
    cout << "\tI am learning cpp02\n";
}

// 输入输出流测试1
void testIOFunction() {
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
}

// 输入输出流测试2
void testIOFunction2() {
    cout << "Please enter your name: ";
    char name[20];
    cin >> name;
    cout << "Please enter your age:";
    int age;
    cin >> age;
    cout << "Your name is: " << name << ",\t";
    cout << "Your age is: " << age << endl;
}
