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
//枚举类型
enum class Color {
    red ,
    blue,
    green
};
//union联合体??
ostream& operator<<(ostream& os, Color color) {
    switch (color) {
        case Color::red:
            os << "red";
            break;
        case Color::green:
            os << "green";
            break;
        case Color::blue:
            os << "blue";
            break;
    }
    return os;
}
//结构体
struct TestStruct {
    
};
// int main() {
//     Color color = Color::red;
//     cout << color << endl;
//     return 0;
// }
