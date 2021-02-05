//
// Created by Devin on 2021/2/5.
//

#include <iostream>

using namespace std;

/**
 * 冒泡排序:
 *    1、比较相邻的元素，如果第一个比第二个大就互换
 *    2、对比每一对相邻元素，找到一个最大值
 *    3、重复上一次步骤，每次比较次数-1，直到结束
 * 外层循环次数：数组长度 - 1
 * 内层循环次数：数组长度 - 外层循环轮数 - 1
 */
void bubble_sort();

int main() {
    return 0;
}

void bubble_sort() {
    int array[] = {9, 2, 3, 6, 12, 4};
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    // C++11新特性,遍历数组
    for (int i : array) {
        cout << i << endl;
    }
}