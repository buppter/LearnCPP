//
// Created by SXTian on 2019/10/15.
//
#include <iostream>
#include <string>

using namespace std;

int main() {

    //1. 整型
    int a = 0;
    cout << "请给整型变量 a 赋值：" << endl;
    cin >> a;
    cout << "整型变量 a 的值为： " << a << endl;

    //2. 浮点型
    float b = 3.14f;
    cout << "请给浮点型变量 b 赋值：" << endl;
    cin >> b;
    cout << "整型变量 b 的值为： " << b << endl;

    //3. 字符型
    char ch = 'a';
    cout << "请给字符型变量 ch 赋值：" << endl;
    cin >> ch;
    cout << "整型变量 ch 的值为： " << ch << endl;

    //4. 字符串类型
    string str = "hello";
    cout << "请给字符串型变量 str 赋值：" << endl;
    cin >> str;
    cout << "整型变量 str 的值为： " << str << endl;

    //5. bool类型
    bool flag = true;
    cout << "请给bool型变量 flag 赋值：" << endl;
    cin >> flag;
    cout << "整型变量 flag 的值为： " << flag << endl;
    return 0;
}