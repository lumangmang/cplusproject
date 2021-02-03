//
// Created by Devin on 2021/2/3.
//

#include <iostream>

/**
 * 指针（pointer）是“指向（point to）”另外一种类型的复合类型。与引用类似，指针也实现了对其他对象的间接访问
 * 指针本身就是一个对象，可以对指针赋值拷贝；
 * 指针无须在定义时赋初值。和其他内置类型一样，在块作用域内定义的指针如果没有被初始化，也将拥有一个不确定的值；
 */
int main(void) {
    // 指向int型对象的指针
    // 指针存放对象的内存地址
    int *p1, *p2;
    int iVal = 42;
    // p存放变量iVal的地址，p是指向变量iVal的指针
    int *p = &iVal;
    // 对指针解引用得到的是指针所指向的对象
    // 因此对指针解引用赋值本质是给其所指向的对象赋值
    *p = 0;
    std::cout << *p << iVal;

    // 空指针
    int *p3 = nullptr; // C++11新标准，推荐使用
    int *p4 = 0;
    int *p5 = NULL; // 避免使用

    double obj = 3.14, *pd = &obj;
    // void＊是一种特殊的指针类型，可用于存放任意对象的地址
    void *pv = &obj;
    pv = pd;
    return 0;
}