//
// Created by 梁俊可 on 2025/10/23.
//
/*
    switch statement: switch语句
    switch(expression) {
    case constant-expression:
        statement(s);
        break;
    case constant-expression:
        statement(s);
        break;
    ...
    default:
        statement(s);
    }
 */
#include <iostream>
using namespace std;
void switch_statement() {
    int choice;
    enum { Q=0, A=1, B=2, C=3 };
    while (true) {
        cout << "Enter your choice( 1, 2, 3): ";
        if (!(cin >> choice)) { //判断输入是否为整型数据
            // 输入非整型数据
            cin.clear(); // 清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略非法输入
            cout << "Invalid input type. Please enter an integer.\n";
            continue;
        }
        // 合法范围检查
        if (choice < A || choice > C) {
            cout << "Invalid choice. Please select from 1, 2, or 3.\n";
            continue;
        }
        break;//输入正确则跳出while循环
    }


    switch (choice) {
        case A:
            cout << "You selected option A." << endl;
            break;
        case B:
            cout << "You selected option B." << endl;
            break;
        case C:
            cout << "You selected option C." << endl;
            break;
        default:
            // 不应到达此处，但为了安全起见加上日志或断言更好
            cout << "Unexpected error occurred!" << endl;
            break;
    }
}
// int main() {
//     switch_statement();
// }