#include <iostream>

using namespace std;

//1. 创建学生的数据类型：姓名，年龄，分数
struct Student {
    string name;
    int age{};
    int score{};
} S3;   //第三种创建方式


int main1() {
    //2. 通过学生类型创建学生

    //2.1 struct Student s1;
    struct Student S1;
    S1.name = "zhangsan";
    S1.age = 12;
    S1.score = 100;
    cout << "姓名：" << S1.name << "\t年龄：" << S1.age << "\t分数：" << S1.score << endl;

    //2.2 struct Student s2 = {...};
    struct Student S2 = {"lisi", 15, 90};
    cout << "姓名：" << S2.name << "\t年龄：" << S2.age << "\t分数：" << S2.score << endl;

    //2.3 定义结构体时顺便创建结构体变量
    S3.name = "wangwu";
    S3.age = 13;
    S3.score = 99;
    cout << "姓名：" << S3.name << "\t年龄：" << S3.age << "\t分数：" << S3.score << endl;

    return 0;

}