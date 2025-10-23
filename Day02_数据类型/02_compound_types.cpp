//
// Created by 梁俊可 on 2025/10/23.
//
/* 01、reference (引用)和 reference type (引用类型)
    1. Reference (引用)
    定义：引用是已存在对象的别名，是某个变量的另一个名字
    特点：
        必须在声明时初始化
        初始化后不能改变引用的对象
        不占用额外的内存空间（通常实现为常量指针）
    2. Reference Type (引用类型)
    定义：引用类型是指能够存储引用的数据类型
    在C++中：
        左值引用：T&（如 int&）
        右值引用：T&&（C++11引入，如 int&&）
        通用引用：T&&（模板上下文中的万能引用）
    3. 主要区别
    Reference：具体的引用对象实例
    Reference Type：引用的类型声明，描述引用的性质和所引用对象的类型
    4. 使用场景
    函数参数传递（避免拷贝）
    函数返回值（返回大型对象的引用）
    范围for循环中的元素访问
*/
# include <iostream>
using namespace std;
/*
    2.复合数据类型（Compound Types）
        引用类型：左值引用 T&、右值引用 T&&
        指针类型：T*、函数指针、成员指针
        数组类型：T[]、T[n]
        函数类型：函数签名类型
*/
//--------------------------01、引用类型-----------------------------------------
//左值引用
void Lvalue_Reference() {
    //T&（类型后跟单个&符号）
    int a = 10;
    int& b = a;//左值引用: b是a的别名,& 是引用, &b的内存地址和a的存储地址相同
    b=20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
}
//右值引用
void Rvalue_Reference() {
    //T&&（类型后跟两个&符号）
    int a = 10;
    int&& b = std::move(a);//右值引用:???
    b=20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
}
//通用引用
void Universal_Reference() {
    //T&&（类型后跟两个&符号）
    int a = 10;
    int&& b = std::move(a);
    b=20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

}
//--------------------------02、指针类型-----------------------------------------
void T_Pointer() {}
void Function_Pointer() {}
void Array_Pointer() {}
void Function_Signature_Pointer() {}
//--------------------------03、数组类型-----------------------------------------
void Array_Type() {}
//--------------------------04、函数类型-----------------------------------------
void Function_Type() {}

// int main() {
//     //Lvalue_Reference();
//     Rvalue_Reference();
//     Universal_Reference();
//     return 0;
// }