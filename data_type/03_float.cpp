//
// Created by SXTian on 2019/10/15.
//


#include <iostream>

int main3() {
    /*
     * 单精度 float
     * 双精度 double
     *
     * 两者的区别在于表示的有效数字范围不同
     * float：占4字节，7位有效数字
     * double：占8字节，15-16位有效数字
     *
     * 默认情况下，输出一个小数会显示出6位有效数字
     */

    float num1 = 3.1415926f;
    double num2 = 3.1415926;

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    //统计float和double占用的内存空间
    std::cout << "float占用的内存空间为： " << sizeof(float) << std::endl;
    std::cout << "double占用的内存空间为： " << sizeof(double) << std::endl;

    //科学计数法

    float num3 = 3e2;
    float num4 = 3e-2;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;


    return 0;
}