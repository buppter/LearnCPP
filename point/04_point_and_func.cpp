//
// Created by SXTian on 2019/10/17.
//
#include <iostream>

using namespace std;

//实现两数交换
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << "swap a = " << *a << endl;
    cout << "swap b = " << *b << endl;
}

int main4() {
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
