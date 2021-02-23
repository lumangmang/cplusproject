//
// Created by Devin on 2021/2/5.
//

#include <iostream>

using namespace std;

/**
 * 值传递
 * a,b形参
 */
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/**
 * 地址传递
 * 指针作为参数
 */
void pointer_function(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * 引用传递
 */
// void reference(int &a) {
//     a = 2;
// }

int main() {
    // 值传递的时候，形参的改变不会影响实参
    // swap(10, 20);

    int array[4] = {1, 2, 3, 4};
    // 利用指针访问数组中的元素
    int *p = array; // 数组名即为数组首地址
    // p++; // 让指针向后偏移4个字节,访问第二个元素

    // 遍历数组
    for (int i = 0; i < 4; i++) {
        cout << *p << endl;
        p++;
    }

    // 地址传递的时候，形参的改变会影响实参
    int a = 10, b = 20;
    pointer_function(&a, &b);
    cout << a << endl << b << endl;

    return 0;
}