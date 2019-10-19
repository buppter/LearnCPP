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

//定义老师结构体
struct Teacher {
    int id;
    string name;
    int age;
    struct Student stu;
};


int main4(){
    Teacher t;
    t.id = 100;
    t.name = "老王";
    t.age = 20;
    t.stu.name = "李明";
    t.stu.age = 10;
    t.stu.score = 100;
    cout << t.id << " " <<  t.name << " " << t.age << endl;
    cout << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;
    return 0;
}