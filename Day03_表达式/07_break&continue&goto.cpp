//
// Created by 梁俊可 on 2025/10/23.
//
/*
  1. break 语句
        作用：立即终止当前循环或switch语句的执行
        影响范围：只跳出最内层的循环或switch结构
        使用场景：提前退出循环、switch分支选择
  2. continue 语句
        作用：跳过当前循环迭代的剩余部分，直接进入下一次迭代
        影响范围：仅影响当前循环的当前迭代
        使用场景：跳过某些特定条件下的循环体执行
  3. goto 语句
        作用：无条件跳转到程序中指定标签的位置
        影响范围：可以在函数内任意跳转
        使用场景：错误处理、复杂的控制流转移（但一般不推荐使用）
 */
#include <iostream>
using namespace std;
// int main() {
//       int a = 10;
//       if (a < 0) {
//             goto error_label;
//       }
//       cout << "正常执行" << endl;
//       return 0;
//
//       error_label:
//           cout << "错误处理" << endl;
//       return -1;
// }