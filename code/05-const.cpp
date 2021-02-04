//
// Created by Devin on 2021/2/3.
//

#include <iostream>

/**
 * 常量的引用
 * 对常量的引用不能被用作修改它所绑定的对象(因为不能对常量进行修改，所以不能通过引用修改它的绑定对象)
 */
void example(void);
int main(void) {
    const int ci = 1024;
    const int &ri = ci;
    example();
    // ri = 42; // 错误 ri是对常量的引用，不能修改
    // int &r2 = ci; // 错误 让一个非常量引用指向一个常量对象
    return 0;
}

void example(void) {
    // ri引用了一个int型的数。
    // 对ri的操作应该是整数运算，但dVal却是一个双精度浮点数而非整数。
    // 因此为了确保让ri绑定一个整数，编译器把代码变形成:
    // const int temp = dVal;
    // const int &ri = temp;
    double dVal = 3.14;
    const int &ri = dVal;

    int i = 42;
    int &r = i;
    const int &rs = i;
    r = 0;

    const double pi = 3.14;
    // double *ptr = &pi // 错误,ptr是一个普通指针
    // 要想存放常量对象的地址，只能使用指向常量的指针
    const double *ptr = &pi;
    // 指向常量的指针不能用于改变其所指对象的值
    // *ptr = 0; // 错误，不能修改所指的对象的值
    std::cout << r << rs;
}

/**
 * 常量指针必须初始化，并且一旦初始化完成，则它的值(存放在指针中的地址)不能改变
 */
void const_pointer() {
    int errNum = 0;
    int iVal = 20;
    int *const curErr = &errNum; // curErr将一直指向errNum
    // curErr = &iVal; // 错误，不能改变常量指针的值
    const double pi = 3.14;
    // pip是一个指向常量对象的常量指针
    const double *const pip = &pi;
}