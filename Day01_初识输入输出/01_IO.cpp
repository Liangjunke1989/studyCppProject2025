#include <iostream>
using namespace std;

// 测试输出“Hello World”
void print_hello() {
    cout << "Hello, World!" << endl; //cout: c output
}

//测试输入输出
void testIO(); //函数声明
void testIO2();

// 测试输入两个数字的和
int testAdd(int a, int b); //函数声明

//定义泛型函数，测试两个数的结果
template<typename T>
T testSum(T a, T b) {
    return a * b;
}
//测试结果
void testResult(int a, int b);

//主函数
// int main() {
//     //print_hello();
//     testIO();
//     //testIO2();
// }

//测试输入输出
void testIO() {
    //函数定义
    int age;
    string name;
    bool sex;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age: ";
    //控程序获取输入
    cin >> age; //回车后，制台权限交给程序。继续运行.------“用户输入缓冲区”，程序与“用户输入缓冲区”打交道，不直接与用户打交道

    cout << "Please enter your sex: ";
    cin >> sex;

    //输出
    cout << "Your name is: " << name << "，\t";
    cout << "Your age is: " << age << "，\t";
    cout << "Your sex is: " << sex << endl;
}

//测试输入输出2
void testIO2() {
    cout<<"请输入两个数字:";
    int a, b;
    cin>>a>>b;
    cout<<"两个数字的和为:"<<testAdd(a, b)<<endl;
    cout<<"两个数字的乘积为:"<<testSum(a, b)<<endl;
    testResult(a, b);
}

//测试输入两个数字的和
int testAdd(const int a, const int b) {
    //为什么使用 const？
    return a + b;
}
auto testResult(const int a, const int b) -> void {
    printf("泛型函数，两个数的积为：%d",testSum(a, b));
}


