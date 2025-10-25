//
// Created by 梁俊可 on 2025/10/25.
//
//encapsulation 封装
//封装：将数据成员和成员函数组合在一起，构成一个完整的类。
#include <format>
#include <iostream>
#include <format>
#include <iostream>
using namespace std;


/*  encapsulation 封装
     返回引用 - 直接操作原数据
        string& getType() { return type; }
     返回值 - 创建副本
        string getType() { return type; }
 */
class Animal {
protected:
    string name;
    int age = 0;
    string type;
    char sex = 0;

public:
    //构造函数
    Animal(const string &name, int age, const string &type)
        : name(name),
          age(age >= 0 ? age : 0), // 防止负年龄
          type(type) {
        cout << "类型为：" << this->type << ",姓名为：" << this->name
             << ",年龄为：" << this->age << endl;
    }

    //析构函数
    virtual ~Animal() = default;

    //静态成员函数
    static void eat() {
        cout << "可以吃！" << endl;
    }

    static void call() {
        cout << "可以叫！！" << endl;
    }

    //成员函数
    void run() {
        cout << "可以跑！" << endl;
    }

    // Getter for type to maintain encapsulation
    virtual string& getType()  { return type; }//获取类型
    virtual void setType(const string& newType) { type = newType; }//设置类型
};

class Dog : public Animal {
public:
    static void call() {
        cout << "可以汪汪汪叫" << endl;
    }

    Dog(const string &name, int age, const string &type)
        : Animal(name, age, type) {}
};

class Cat : public Animal {
public:
    static void call() {
        cout << "可以喵喵喵叫" << endl;
    }

    Cat(const string &name, int age, const string &type)
        : Animal(name, age, type) {}
};

class Bird : public Animal {
public:
    Bird(const string &name, int age, const string &type)
        : Animal(name, age, type) {}

    virtual void fly() {
        cout << this->type << "可以飞" << endl;
    }
};

class Parrot final : public Bird {
public:
    Parrot(const string &name, int age, const string &type)
        : Bird(name, age, type) {}

    void fly() override {
        cout << this->type << "可以高空飞" << endl;
    }
};

class Duck final : public Bird {
public:
    Duck(const string &name, int age, const string &type)
        : Bird(name, age, type) {}
};

void test_encapsulation() {
    cout << "----------02----------"<< endl;
    Animal animal("恐龙", 1000, "原始动物");
    animal.setType("哺乳动物"); // 更安全地更改类型
    cout << "animal type:" << animal.getType() << endl;
    animal.run();

    Dog dog("旺财", 3, "狗");
    cout << dog.getType() << endl;
    Dog::eat();

    Cat cat("小猫", 1, "猫");
    Cat::call(); // 推荐显式调用静态函数

    Bird bird("小鸟", 10, "鸟");
    bird.fly();

    Parrot parrot("鹦鹉", 5, "鹦鹉");
    parrot.fly();

    Duck duck("鸭子", 10, "鸭子");
    duck.fly();
    duck.setType("家禽类");
    cout << duck.getType() << endl;
}

// int main() {
//
//     //test_encapsulation();
//
//     return 0;
// }
