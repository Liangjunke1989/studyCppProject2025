//
// Created by 梁俊可 on 2025/10/22.
//

#include <iostream>
using namespace std;

//宏常量：本质为文本的替换（字符串的替换）
#define PI 3.14159265358979323846L

//宏常量：使用#ifndef判断是否定义了M_PI
#ifndef M_PI
#define M_PI 3.14159265358979323846L
#endif

// int main() {
//     cout << "----------01、const常量-------------" << endl;
//     const float num01 = -3.1415926; // float的精度为5
//     cout << "float num01:\t" << num01 << endl; //输出-3.14159
//     cout.precision(25); // 设置输出精度
//     const double num02 = 3.14159265358979323846; // double的精度为15
//     cout << "double num02:\t" << num02 << endl; //3.141592653589793
//     const long double num03 = 3.14159265358979323846L; // long double的精度为18
//     cout << "long double num03:\t" << num03 << endl; //3.141592653589793238
//
//     cout << "----------02、constexpr常量-------------" << endl;
//     constexpr int num04 = -10 + 20; //字面常量，constexpr: 值必须在编译时就能确定，适用于编译时就能确定的常量表达式
//     cout << num04 << endl;
//
//     cout << "----------03、#define宏常量-------------" << endl;
//     cout << PI << endl;
//     cout << M_PI << endl;
// }
