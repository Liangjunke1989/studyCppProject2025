//
// Created by 梁俊可 on 2025/10/23.
//
/*
  range for statement: 范围for循环
  for (declaration : expression) {
      statement;
  }
  declaration: 声明变量
  expression: 迭代变量

    C++ range for statement
        for (auto& element : container) {
        //处理 element
        }

   C# foreach
        foreach (var element in container) {
        //处理 element
        }
*/

#include <iostream>
using namespace std;
void range_for_statement() {
    vector<int> numbers = {1, 2, 3, 4, 5}; // 定义一个向量
    //范围变量必须是引用类型，这样才能对元素执行写操作
    for (auto &r : numbers) {
        r *= 2;
    }
    //等价于：
    for (auto i = numbers.begin(); i != numbers.end(); ++i) {
        auto &r = *i;//r 必须是引用类型，这样才能对元素执行写操作？？
        r *= 2;
    }
}

