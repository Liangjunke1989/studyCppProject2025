//
// Created by 梁俊可 on 2025/10/23.
//
/*
    3.派生数据类型（Derived Types）
        类类型：class、struct
        枚举类型：enum、enum class
        联合体：union
*/
#include <iostream>
using namespace std;
//类类型
class TestClass {
public:
    void my_test() {
        const int a = 10;
        cout << a << endl;
    }
};
