//
// Created by SXTian on 2019/10/18.
//
#include <iostream>

using namespace std;
/*
 * 结构体数组
 */

//1. 定义结构体
struct Student {
    string name;
    int age;
    int score;
};

int main2() {
    //2. 创建结构体数组
    struct Student stuArr[2]{
            {"zhangsan", 10, 39},
            {"李四",       22, 90},
    };

    //3. 给结构体数组中的元素赋值
    stuArr[0].name = "张三";

    //4. 遍历结构体
    for (int i = 0; i <2 ; ++i) {
            cout << "姓名：" << stuArr[i].name << "\t年龄：" << stuArr[i].age << "\t分数：" << stuArr[i].score << endl;

    }
}

