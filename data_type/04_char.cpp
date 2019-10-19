//
// Created by SXTian on 2019/10/15.
//

#include "iostream"
int main4(){
    /*
     * C 和 C++ 中字符型变量只占1个字节
     */

    //1. 字符型变量创建方法
    char ch = 'a';
    std::cout << ch << std::endl;

    //2. 字符型变量所占的内存空间
    std::cout << sizeof(ch) << std::endl;

    //3. 常见的错误
    // char ch = "2";  //创建字符型变量时，要用单引号
    // char ch2 = 'anc';  //创建字符型变量时，单引号内只能有一个字符

    //4. 字符型变量对应的ASCII编码
    //a - 97
    //A - 65
    std::cout << (int)ch << std::endl;
    std::cout << (int)'A' << std::endl;
    return 0;
}