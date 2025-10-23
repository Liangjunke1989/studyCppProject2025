//
// Created by 梁俊可 on 2025/10/23.
//
/*
    数组类型和向量类型的主要区别
    1. 内存分配方式
        数组类型：在栈上分配固定大小的连续内存空间
        向量类型：在堆上动态分配内存，可根据需要自动扩容
    2. 大小灵活性
        数组类型：大小在编译时确定，无法动态改变
        向量类型：大小可在运行时动态调整，支持 push_back 等操作
    3. 内存管理
        数组类型：自动管理，无需手动释放
        向量类型：自动管理内存，但提供了更多的内存控制选项
    4. 性能特点
        数组类型：访问速度更快，无额外开销
        向量类型：稍有额外开销，但提供了更多便利功能
    5. 功能丰富程度
        数组类型：基础功能，仅支持索引访问
        向量类型：丰富的成员函数（size()、capacity()、resize() 等）
    6. 传递给函数
        数组类型：退化为指针，丢失大小信息
        向量类型：保持完整信息，可直接传递 vector 对象
*/
#include <iostream>
using namespace std;
//数组类型
void test_array1() {
    int int_array[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++) {
    //     cout << int_array[i] << endl;
    // }
    // for(auto& element: int_array) {
    //     cout << element << endl;
    // }
    // for_each(int_array, int_array + 5, [](int i) {//lambda
    //     cout << i <<endl;
    // });
    cout << int_array[4] << endl;
    cout << int_array[5] << endl;//运行时访问越界,随机给了个值
}
void test_array2() {
    int int_array[10] = {};//默认初始化为0
    // for (int i = 0; i < 10; i++) {
    //     int_array[i] = i*i;
    //     cout << int_array[i] << endl;
    // }
    //查看int_array[10]的数组的长度
    cout  << "数组长度为: "<< sizeof(int_array)/sizeof(int)<< endl;
    int_array[2]=100;
    for (auto& element: int_array) {
        cout << element << ",";
    }
    cout << endl;
    for (int i = 0; i < sizeof(int_array)/sizeof(int); i++) {
        int_array[i]++;
        cout << int_array[i] << ",";
    }
    cout << endl;
    for (auto& element: int_array) {
        element++;
        cout << element << ",";
    }

}
//向量类型
void test_vector() {
    vector<int> int_vector = {1, 2, 3, 4, 5};
    for_each(int_vector.begin(), int_vector.end(), [](int i) {//lambda
        cout << i <<endl;
    });
}
//二维数组
void test_array3() {
    int int_array[3][4] = {};
    for (auto& row : int_array) {
        int j = 0;
        for (auto& element : row) {
            if (j == 0) {
                element = element + 1;
            } else if (j == 1) {
                element = element + 10;
            } else if (j == 2) {
                element = element + 100;
            } else if (j == 3) {
                element = element + 1000;
            }
            cout << element << ",";
            j++;
        }
        cout << endl;
    }

}

// int main() {
//     //test_array1();
//     //test_array2();
//     //test_vector();
//     test_array3();
// }