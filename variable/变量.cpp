//
// Created by SXTian on 2019/10/15.
//

/*
 * 常量定义的方式：
 * 1. #define 宏常量
 * 2. const 修饰的常量
 */


// 1. #define 宏常量

#include <iostream>

#define Day 7
int main1(){
    std::cout << "一周一共有：" << Day << " 天" << std::endl;

    //2. const修饰的变量
    const int month = 12;
    std::cout << "一年一共有：" << month << " 月" << std::endl;

    return 0;
}