#include <iostream>

#define MAX 1000
using namespace std;

/*
 * 通讯录管理系统
 * Address List Manager System(ALMS)
 */

//联系人结构体
struct Person {
    string m_Name; //姓名
    int m_Sex; //性别
    int m_Age; //年龄
    string m_Phone; //电话
    string m_Address; //地址
};

//通讯录结构体
struct AddressLists {
    //通讯录中保存中的联系人数组
    struct Person personArray[MAX];
    //通讯录当前记录联系人个数
    int m_Size;
};

//菜单界面
void showMenu() {
    cout << "***********************" << endl;
    cout << "***** 1. 添加联系人 *****" << endl;
    cout << "***** 2. 显示联系人 *****" << endl;
    cout << "***** 3. 删除联系人 *****" << endl;
    cout << "***** 4. 查找联系人 *****" << endl;
    cout << "***** 5. 修改联系人 *****" << endl;
    cout << "***** 6. 清空联系人 *****" << endl;
    cout << "***** 0. 退出通讯录 *****" << endl;
    cout << "***********************" << endl;

}

//1. 添加联系人
void addPerson(AddressLists *adl) {
    //判断通讯录是否已满，如果满了就不再添加
    if (adl->m_Size == MAX) {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }

    //添加具体联系人

    //姓名
    string name;
    cout << "请输入姓名：" << endl;
    cin >> name;
    adl->personArray[adl->m_Size].m_Name = name;

    //性别
    int sex = 0;
    cout << "请输入性别：" << endl;
    cout << "1 -- 男" << endl;
    cout << "2 -- 女" << endl;
    while (true) {
        //如果输入的为1或2，则退出循环；否则重新输入
        cin >> sex;
        if (sex == 1 || sex == 2) {
            adl->personArray[adl->m_Size].m_Sex = sex;
            break;
        } else {
            cout << "输入有误，请重新输入" << endl;
        }
    }

    //年龄
    int age = 0;
    cout << "请输入年龄：" << endl;
    while (true) {
        //如果输入的为1-100，则退出循环；否则重新输入
        cin >> age;
        if (age >= 1 & age <= 100) {
            adl->personArray[adl->m_Size].m_Age = age;
            break;
        } else {
            cout << "输入有误，请重新输入" << endl;
        }
    }

    //电话
    string phone;
    cout << "请输入电话：" << endl;
    cin >> phone;
    adl->personArray[adl->m_Size].m_Phone = phone;

    //地址
    string address;
    cout << "请输入住址：" << endl;
    cin >> address;
    adl->personArray[adl->m_Size].m_Address = address;

    //更新通讯录人数
    adl->m_Size++;
    cout << "添加成功！" << endl;

    system("clear"); //清屏操作
}

int main() {
    //创建通讯录结构体变量
    AddressLists adl;
    //初始化通讯录中的人数
    adl.m_Size = 0;

    int select = 0; //创建用户输入的变量

    //菜单调用
    while (true) {

        showMenu();
        cin >> select;
        switch (select) {
            case 1:
                addPerson(&adl);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                return 0;
            default:
                break;
        }
    }
    return 0;
}