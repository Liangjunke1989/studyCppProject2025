//
// Created by 梁俊可 on 2025/10/25.
//
/*
 ------------------Shallow Copy & Deep Copy 深浅拷贝------------------------------
    浅拷贝 (Shallow Copy)
        定义：
            浅拷贝只是简单地将一个对象的内存位复制到另一个对象，对于指针成员，只会复制指针本身的值（即地址），
            而不是指针指向的内容
        特点：
            默认拷贝构造函数和赋值运算符执行的就是浅拷贝
            多个对象共享同一块动态分配的内存
            当对象销毁时可能出现重复释放同一内存的问题
    深拷贝 (Deep Copy)
        定义：
            深拷贝不仅复制对象本身，还会为指针成员分配新的内存空间，并复制指针指向的内容
        特点：
            每个对象都有自己独立的资源副本
            避免多个对象间的数据竞争和内存管理问题
            需要自定义拷贝构造函数和赋值运算符来实现
*/
#include <iostream>
using namespace std;
class MyClass {
public:
    int* data;//int*: 整型指针：指向int的指针，指向动态分配的内存
    // 浅拷贝问题示例
    explicit MyClass(const int value) {
        data = new int(value);
        cout<<"浅拷贝:"<<data<<endl;
    }
    // 浅拷贝（默认拷贝）构造函数执行
    // MyClass(const MyClass& other) {
    //     this->data = other.data; // 只复制指针，不复制内容
    //     cout << "浅拷贝:" << this->data << endl;
    // }

    // // 深拷贝（需要自定义）
    MyClass(const MyClass& other) {
        this->data = new int(*(other.data)); // 分配新内存并复制内容
        cout << "深拷贝：" << this->data << endl;
    }

    ~MyClass() {
        delete data;
    }
};
void test_ShallowCopy_DeepCopy(){
    cout << "---------01-----------"<< endl;
    int a=10;
    int* p = &a;//创建一个整型指针
    cout<<"浅拷贝0:"<<p<<endl;
    int* p1 = new int(a);//动态分配内存
    cout<<"浅拷贝1:"<<p1<<endl;
    cout << "---------02-----------"<< endl;
    const MyClass obj1(10);//整型数据指针
    cout<<"浅拷贝2:"<<obj1.data<<endl;
    cout << "---------03-----------"<< endl;
    MyClass obj2(obj1);//浅拷贝
    MyClass obj3(*p1);
}
// int main() {
//     test_ShallowCopy_DeepCopy();
// }