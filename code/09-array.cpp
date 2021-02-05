//
// Created by Devin on 2021/2/4.
//

#include <iostream>

using namespace std;

void reverse();

void maxWeight();

void two_dimensional();

void statistics();

int main() {
    // 数组的首地址即为数组的第一个元素的地址
    // 数组名即为数组首地址，是一个常量
    // int a[] = {1, 2, 3, 4};
    // cout << a[0] << sizeof(a) << endl << a << &a[0] << &a[1];
    // maxWeight();
    // reverse();
    // two_dimensional();
    statistics();

    return 0;
}

/**
 * 二维数组：
 * 定义：
 *    1、数据类型 数组名[行数][列数];
 *    // 推荐使用,可读性较高
 *    2、数据类型 数组名[行数][列数] = { {数据1，数据2}, {数据3， 数据4} };
 *    3、数据类型 数组名[行数][列数] = { 数据1, 数据2 };
 *    4、数据类型 数组名[][列数] = { 数据1, 数据2, 数据3 }
 */
void two_dimensional() {
    int array[2][3] = {1, 2, 3, 4};
    // sizeof(array); // 数组占用的总内存空间
    // sizeof(array[0]); // 第一行占用的内存空间
    // sizeof(array[0][0]); // 第一个元素占用的内存空间
    // sizeof(array) / sizeof(array[0]) = 数组的行数
    // sizeof(array[0]) / sizeof(array[0][0]) = 数组的列数
    cout << array << &array[0][0] << sizeof(array);
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

    for (int i : a) {
        cout << i << endl;
    }
}

void statistics() {
    int array[3][3] = {
            {100, 100, 100},
            {90,  50,  100},
            {60,  70,  80},
    };
    string names[] = {
            "张三",
            "李四",
            "王五",
    };
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += array[i][j];
        }
        cout << names[i] << sum << endl;
        sum = 0;
    }
}