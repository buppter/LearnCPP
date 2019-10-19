//
// Created by SXTian on 2019/10/18.
//

#include <iostream>

using namespace std;

//定义学生的结构体
struct Student {
    string name;
    int age;
    int score;
};

// 值传递
void printStu1(struct Student s) {
    cout << "子函数1中 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;
}

//地址传递
void printStu2(struct Student *p) {
    cout << "子函数2中 姓名：" << p->name << " 年龄：" << p->age << " 成绩：" << p->score << endl;

}

int main5() {
    //将学生传入一个参数中，打印学生的信息

    //创建结构体变量
    Student t = {"Lucy", 10, 100};

    //打印信息
    //printStu1(t);
    printStu2(&t);

    return 0;
}