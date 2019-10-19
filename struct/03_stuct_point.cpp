//
// Created by SXTian on 2019/10/18.
//

#include <iostream>

using namespace std;

/*
 * 结构体指针
 */

struct Student {
    string name;
    int age;
    int score;
};

int main3() {
    //1. 创建结构体变量
    struct Student S1 = {"张三", 28, 100};
    //2. 通过指针访问结构体变量
    Student *p = &S1;
    //3. 通过指针访问结构体变量中的数据
    cout << "name:" << p->name << "\tage:" << p->age << "\tscore:" << p->score << endl;
    return 0;
}