//
// Created by SXTian on 2019/10/15.
//
#include <iostream>

using namespace std;

int main6() {
    /*
     * true - 真（本质是1）
     * false - 假（本质是0）
     *
     * 所占的内存空间为 1 字节
     */

    //1. 创建bool数据类型
    bool flag = true;
    cout << flag << endl;

    flag = false;
    cout << flag << endl;

    //2. 占用的内存空间
    cout << "bool 类型所占的内存空间： " << sizeof(bool) << endl;
}