//
// Created by Devin on 2021/2/4.
//

#include <iostream>

using namespace std;

void reverse();

void maxWeight();

int main() {
    // 数组的首地址即为数组的第一个元素的地址
    // 数组名即为数组首地址，是一个常量
    // int a[] = {1, 2, 3, 4};
    // cout << a[0] << sizeof(a) << endl << a << &a[0] << &a[1];
    maxWeight();
    reverse();
    return 0;
}

/**
 * 求数组最大值
 */
void maxWeight() {
    int a[] = {100, 200, 300, 250, 180};
    int weight = a[0];
    for (int i = 1; i < (sizeof(a) / sizeof(a[0])); i++) {
        if (a[i] > weight) weight = a[i];
    }

    cout << weight << endl;
}

/**
 * 数组倒置
 */
void reverse() {
    int a[] = {1, 3, 2, 5, 4};
    int start = 0, temp;
    int end = sizeof(a) / sizeof(a[0]) - 1;

    while (start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
        cout << a[i] << endl;
    }
}