#include <iostream>

using namespace std;

int main() {
    /*
     * 前置、后置运算符
     */

    //1. 前置递增
    int a = 10;
    ++a; // 让变量 +1
    cout << "a = " << a << endl;

    //2. 后置递增
    int b = 10;
    b++; // 让变量 +1
    cout << "b = " << b << endl;

    //3. 前置和后置的区别
    //前置递增：先让变量 +1， 然后进行表达式计算
    //后置递增：先让变量进行表达式运算，然后变量 +1
    int a1 = 10;
    int b1 = ++a1 * 10;
    cout << "a1 = " << a1 << endl;  // 11
    cout << "b1 = " << b1 << endl;  // 110

    int a2 = 10;
    int b2 = a2++ * 10;
    cout << "a2 = " << a2 << endl;  // 11
    cout << "b2 = " << b2 << endl;  // 100

    //4. 前置递减，后置递减同理

    return 0;
}