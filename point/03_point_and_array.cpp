//
// Created by SXTian on 2019/10/17.
//
#include <iostream>

using namespace std;

int main3() {
    /*
     * 指针和数组
     * 利用指针访问数组中的元素
     */

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "第一个元素为：" << arr[0] << endl;
    int *p = arr;
    int *p2 = arr;
    cout << "利用指针访问第一个元素:" << *p << endl;
    cout << "指针的地址：" << p << endl;

    p++;       //让指针向后偏移4个字节

    cout << "利用指针访问第二个元素:" << *p << endl;
    cout << "指针的地址：" << p << endl;

    //利用指针遍历数组
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        cout << *p2 << " ";
        p2++;
    }
    cout << endl;
    return 0;
}