//
// Created by Devin on 2021/2/4.
//

#include <iostream>

using namespace std;

int main() {

    cout << "select a number" << endl;
    // goto 跳转到指定位置
    goto FLAG;
//
//    int select = 0;
//    cin >> select;
//
//    switch (select) {
//        case 1:
//        default:
//            break;
//    }
    // break:跳出当前循环
    // continue:跳出本次循环，继续执行下一次循环
    for (int i = 0; i < 10; i++) {
        if (i == 5) break;
        cout << i << endl;
    }

    // 跳出内层循环
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) break;
            cout << '*';
        }
        cout << endl;
    }

    FLAG:
    // 结束本次循环，执行下一次i
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) continue;
        cout << i;
    }
    
    return 0;
}