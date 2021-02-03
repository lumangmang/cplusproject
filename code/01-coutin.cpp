//
// Created by Devin on 2021/1/20.
//

#include <iostream>

/**
 * int 返回类型
 * main 函数名
 * () 形参为空
 * {} 函数体
 * `main`函数的返回类型必须为int
 * @return
 */
int main() {
    /**
     * `<<` 输出运算符将给定的值写到给定的`ostream`对象中。
     * 接受两个运算对象，左侧的运算对象必须是`ostream`对象，右侧的对象是要打印的值。
     * 前缀 `std::` 指出名字`cout`,`endl`是定义在名为`std`的命名空间(namespace)中
     * 命名空间用来避免命名冲突，标准库中定义的所有名字都在命名空间`std`中。
     * `>>` 输入运算符接收一个`istream`作为其作出运算对象
     * `endl` 的效果是结束当前行，并且刷新缓冲区(buffer)
     */
    std::cout << "enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}


/**
 * 1、每个C++程序都包含一个或多个函数，其中一个必须命名`main`。操作系统通过调用`main`来运行C++程序。
 * 2、函数定义的四个部分：1.返回类型；2.函数名；3.括号保包围的形参列表(可以为空)；4.函数体。
 */