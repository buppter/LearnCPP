//
// Created by SXTian on 2019/10/16.
//

#include "swap.h"

//函数定义
void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}