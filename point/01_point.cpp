#include <iostream>

using namespace std;

int main1() {

    /*
     * 指针所占的内存空间
     *
     * 在32位系统下，所有指针所占内存空间为 4字节
     * 在64位系统下，所有指针所占内存空间为 8字节
     *
     */
    int a = 10;
    int *p = &a;
    cout << sizeof(p) << endl; // 8


    /*
     * 空指针
     * 指针变量指向内存中编号为0的内存空间
     */

    //1. 空指针用于给指针变量进行初始化
    int *p1 = nullptr;
    *p1 = 100;
    //2. 空指针是不允许访问的
    //0 - 255之间的内存编号是系统占用的，因此不可访问
    cout << *p1 << endl;


    /*
     * 野指针
     * 指针变量指向非法内存空间
     */

    int *p2 = (int *) 0x1100;
    cout << *p2 << endl;
    return 0;
}