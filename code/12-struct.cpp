//
// Created by Devin on 2021/2/7.
//

#include <iostream>

using namespace std;

/**
 * 结构体属于用户自定义数据类型
 * 类似系统中的`int`,`string`类型
 */
struct Students {
    // 成员列表
    string name;
    int age;
    int score;
} s3; // 第三种方式

void struct_pointer();

int main() {
    // 创建结构体对象变量, 关键字`struct`可以省略
    // 第一种方式
    struct Students s1;
    s1.name = "张三";
    s1.age = 20;
    s1.score = 100;

    // 第二种方式
    Students s2 = {"李四", 30, 90};

    s3.name = "王五";
    struct_pointer();
    cout << s1.name << s1.score << s2.name << s3.name << endl;
}

/**
 * 结构体数组
 */
void struct_array() {
    // 创建结构体数组
    struct Students array[] = {
            {"张三", 18, 80},
            {"李四", 19, 90},
            {"王五", 20, 95}
    };
    // 给结构体中的元素赋值
    array[0].age = 21;
    array[0].score = 100;
}

/**
 * 结构体指针
 */
void struct_pointer() {
    // 通过指针指向结构体对象变量
    struct Students *p = &s3;
    // 访问结构对象变量中的数据
    p->score = 100;

    cout << p->name << p->score << p->age << endl;
}