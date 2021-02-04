//
// Created by Devin on 2021/2/4.
//

#include <iostream>

/**
 * sizeof: 计算数据类型占用内存大小
 * sizeof(数据类型/变量)
 * short < int <= long <= long long
 */
int main(void) {
    // 单精度，占用4个字节 16位，有效数字7位
    float fpi = 3.14;
    // 双精度，占用8个字节 32位，有效数字15位
    double dpi = 3.14;
    __unused short num = 10;
    std::cout << sizeof(short) << sizeof(num) << std::endl;

    // 科学计数法
    float f = 3e2; // 3 * 10^2
    std::cout << f << std::endl;
    // 字符型变量存储在计算机内存中是其ASCII码值
    char ch = 'a';
    std::cout << int(ch)  << std::endl;
    return 0;
}