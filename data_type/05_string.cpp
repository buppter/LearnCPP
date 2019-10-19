//
// Created by SXTian on 2019/10/15.
//
#include <iostream>
#include <string>

using namespace std;

int main5() {
    //两种风格

    //1. C 风格字符串  char 变量名[] = "字符串"
    /*
     * 注意事项：
     * 1. char 变量名[]
     * 2. 等号后面 要用双引号
     */
    char str1[] = "hello world";
    cout << str1 << endl;

    //2. C++ 风格字符串  string 变量名 = "字符串"
    /*
     * 注意事项：
     * 需要添加头文件 #include <string>
     */
    string str2 = "hello world";
    cout << str2 << endl;
    cout << "字符串 str 1所占的内存空间： "<< sizeof(str1) << endl;
    cout << "字符串 str 2所占的内存空间： "<< sizeof(str2) << endl;
    return 0;
}