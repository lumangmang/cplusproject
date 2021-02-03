//
// Created by Devin on 2021/2/3.
//

#include <iostream>

/**
 * 引用为对象起了另外一个名字，引用类型引用另外一种类型，引用必须初始化。 ——`引用即别名`；
 * 引用并非对象，只是一个已经存在的对象的另一个名字；
 * 定义了一个引用后，对其进行的所有操作都是在与之绑定的对象上进行的。
 */
int main(void) {
    int d = 0, &r = d;
    int iVal = 1024;
    // refVal指向iVal(是iVal的另一个名字)
    int &refVal = iVal;
    // &refVal = d; // 错误，不能把引用绑定到另一个对象上
    // 把2赋给refVal指向的对象，即赋给了iVal;
    // 为引用赋值，实际是把值赋给了引用绑定的对象
    // 获取引用的值，实际是获取其绑定的对象的值
    refVal = 2;
    int &refVal2 = refVal;
    // 等价于 ii = iVal;
    int ii = refVal;
    std::cout << &refVal << ' ' << refVal << ' ' << &iVal << ' ' << std::endl;

    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;

    return 0;
}