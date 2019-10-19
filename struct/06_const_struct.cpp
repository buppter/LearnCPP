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

//加const 防止使用指针时修改数据
void printStu2(const Student *s) {
//    s->age = 10;
    cout << "子函数2中 姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;

}


int main() {
    Student t = {"Lucy", 10, 100};
    printStu2(&t);
    return 0;
}