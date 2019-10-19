#include "swap.h"

/*
 * 函数的分文件编写
 *
 * 1. 创建.h的头文件
 * 2. 创建.cpp的源文件
 * 3. 在头文件中写函数的声明
 * 4. 在源文件中写函数的定义
 *
 * 实现两个数字进行交换的函数
 */

//函数声明
//void swap(int a, int b);

//函数定义

/*void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}*/


int main() {
    int a = 10;
    int b = 20;
    swap(10, 20);
    return 0;
}