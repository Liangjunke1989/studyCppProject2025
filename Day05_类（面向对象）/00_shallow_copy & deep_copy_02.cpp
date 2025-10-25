//
// Created by 梁俊可 on 2025/10/25.
//
/*
深浅拷贝详解
基本概念
浅拷贝 (Shallow Copy)
只复制指针地址，而不复制指针指向的实际数据。拷贝后多个对象共享同一块内存。

深拷贝 (Deep Copy)
复制指针指向的实际数据，为新对象分配新的内存空间，并复制原始数据。
 */
#include <iostream>
#include <cstring>

//浅拷贝
class ShallowCopy {
private:
    char* data;
public:
    ShallowCopy(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // 浅拷贝：编译器生成的默认拷贝构造函数
    ShallowCopy(const ShallowCopy& other) : data(other.data) {
        std::cout << "浅拷贝构造函数" << std::endl;
    }

    ~ShallowCopy() {
        delete[] data;
    }

    void print() const {
        std::cout << "数据地址: " << (void*)data << ", 内容: " << data << std::endl;
    }
};
//深拷贝
class DeepCopy {
private:
    char* data;
public:
    DeepCopy(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);//strcpy() 是C标准库中的字符串拷贝函数，用于将一个字符串复制到另一个字符数组中。
    }

    // 深拷贝：手动实现
    DeepCopy(const DeepCopy& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "深拷贝构造函数" << std::endl;
    }

    // 深拷贝赋值运算符
    DeepCopy& operator=(const DeepCopy& other) {
        if (this != &other) {
            delete[] data;  // 释放原有资源
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
            std::cout << "深拷贝赋值运算符" << std::endl;
        }
        return *this;
    }

    ~DeepCopy() {
        delete[] data;
    }

    void print() const {
        std::cout << "数据地址: " << (void*)data << ", 内容: " << data << std::endl;
    }
};
//测试函数
void demonstrateProblems() {
    std::cout << "=== 浅拷贝问题演示 ===" << std::endl;

    ShallowCopy obj1("Hello");
    ShallowCopy obj2 = obj1;  // 浅拷贝

    obj1.print();  // 数据地址相同
    obj2.print();  // 数据地址相同

    // 问题1：obj1析构后，obj2的data成为悬空指针
    // 问题2：双重释放错误

    std::cout << "\n=== 深拷贝解决方案 ===" << std::endl;

    DeepCopy obj3("World");
    DeepCopy obj4 = obj3;  // 深拷贝

    obj3.print();  // 数据地址不同
    obj4.print();  // 数据地址不同

    // 安全：各自拥有独立的内存
}

class String {
private:
    char* data;
    size_t length;

public:
    // 构造函数
    String(const char* str = "") {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
        std::cout << "构造函数: " << data << std::endl;
    }

    // 深拷贝构造函数
    String(const String& other) {
        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
        std::cout << "拷贝构造函数: " << data << std::endl;
    }

    // 深拷贝赋值运算符
    String& operator=(const String& other) {
        if (this != &other) {  // 自赋值检查
            delete[] data;     // 释放原有资源

            length = other.length;
            data = new char[length + 1];
            strcpy(data, other.data);
            std::cout << "赋值运算符: " << data << std::endl;
        }
        return *this;
    }

    // 移动构造函数 (C++11)
    String(String&& other) noexcept {
        data = other.data;
        length = other.length;

        other.data = nullptr;  // 防止被删除
        other.length = 0;
        std::cout << "移动构造函数" << std::endl;
    }

    // 移动赋值运算符 (C++11)
    String& operator=(String&& other) noexcept {
        if (this != &other) {
            delete[] data;

            data = other.data;
            length = other.length;

            other.data = nullptr;
            other.length = 0;
            std::cout << "移动赋值运算符" << std::endl;
        }
        return *this;
    }

    // 析构函数
    ~String() {
        std::cout << "析构函数: ";
        if (data) {
            std::cout << data;
            delete[] data;
        } else {
            std::cout << "(空)";
        }
        std::cout << std::endl;
    }

    // 其他成员函数
    const char* c_str() const { return data; }
    size_t size() const { return length; }

    void print() const {
        std::cout << "地址: " << (void*)data << ", 内容: \"" << data
                  << "\", 长度: " << length << std::endl;
    }
};

void testDeepCopy() {
    std::cout << "=== 测试开始 ===" << std::endl;

    // 1. 正常构造
    String str1("Hello");
    str1.print();

    // 2. 拷贝构造
    String str2 = str1;  // 深拷贝
    str2.print();

    // 3. 赋值操作
    String str3("World");
    str3 = str1;  // 深拷贝赋值
    str3.print();

    // 4. 自赋值测试
    str3 = str3;  // 安全的自赋值
    str3.print();

    std::cout << "=== 测试结束 ===" << std::endl;
}

void testMoveSemantics() {
    std::cout << "\n=== 移动语义测试 ===" << std::endl;

    String str1("临时字符串");

    // 移动构造
    String str2 = std::move(str1);
    str2.print();
    str1.print();  // str1现在为空

    String str3("另一个字符串");
    // 移动赋值
    str3 = std::move(str2);
    str3.print();
    str2.print();  // str2现在为空
}

int main() {
    demonstrateProblems();
    //testDeepCopy();
    //testMoveSemantics();
}