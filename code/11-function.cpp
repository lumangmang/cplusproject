//
// Created by Devin on 2021/2/5.
//

#include <iostream>

using namespace std;

/**
 * a,b形参
 */
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    // 值传递的时候，形参的改变不会影响实参
    swap(10, 20);
    return 0;
}