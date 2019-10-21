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
    cout << "************************" << endl;
    cout << "***** 1. 添加联系人 *****" << endl;
    cout << "***** 2. 显示联系人 *****" << endl;
    cout << "***** 3. 删除联系人 *****" << endl;
    cout << "***** 4. 查找联系人 *****" << endl;
    cout << "***** 5. 修改联系人 *****" << endl;
    cout << "***** 6. 清空联系人 *****" << endl;
    cout << "***** 0. 退出通讯录 *****" << endl;
    cout << "************************" << endl;

}

/*
 * 1. 添加联系人
 */
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


/*
 * 显示所有联系人
 */
void showPerson(AddressLists *adl) {
    //判断通讯录中人数是否为0， 如果为0，提示为空。否则，显示联系人信息
    if (adl->m_Size == 0) {
        cout << "当前记录为空" << endl;
    } else {
        for (int i = 0; i < adl->m_Size; ++i) {
            cout << "姓名：" << adl->personArray[i].m_Name << "\t";
            cout << "性别：" << (adl->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << adl->personArray[i].m_Age << "\t";
            cout << "电话：" << adl->personArray[i].m_Phone << "\t";
            cout << "地址：" << adl->personArray[i].m_Address << endl;
        }
    }

    system("clear"); //清屏操作
}


/*
 * 3.删除联系人
 */
//检测联系人是否存在，如果存在返回数组下标，不存在返回-1
int isExist(AddressLists *adl, string name) {
    for (int i = 0; i < adl->m_Size; ++i) {
        //找到用户输入的姓名了，返回下标
        if (adl->personArray[i].m_Name == name) {
            return i;
        }
    }
    return -1;
}

//删除联系人
void deletePerson(AddressLists *adl) {
    cout << "请输入要删除的联系人姓名：" << endl;
    string name;
    cin >> name;

    int res = isExist(adl, name);
    if (res == -1) {
        cout << "查无此人" << endl;
        return;
    }
    //查找到人，进行删除
    for (int i = res; i < adl->m_Size; ++i) {
        //数据前移
        adl->personArray[i] = adl->personArray[i + 1];
    }
    adl->m_Size--;
    cout << "删除成功" << endl;


    system("clear"); //清屏操作
}


/*
 * 4. 查找联系人
 */
void findPerson(AddressLists *adl) {
    cout << "请输入要查找的联系人姓名：" << endl;
    string name;
    cin >> name;

    int res = isExist(adl, name);
    if (res == -1) {
        cout << "查无此人" << endl;
        return;
    }
    //查找到人

    cout << "姓名：" << adl->personArray[res].m_Name << "\t";
    cout << "性别：" << (adl->personArray[res].m_Sex == 1 ? "男" : "女") << "\t";
    cout << "年龄：" << adl->personArray[res].m_Age << "\t";
    cout << "电话：" << adl->personArray[res].m_Phone << "\t";
    cout << "地址：" << adl->personArray[res].m_Address << endl;

    system("clear"); //清屏操作
}


/*
 * 5.修改指定联系人
 */
void modifyPerson(AddressLists *adl) {
    cout << "请输入要修改的联系人姓名：" << endl;
    string name;
    cin >> name;

    int res = isExist(adl, name);
    if (res == -1) {
        cout << "查无此人" << endl;
        return;
    }
    //查找到联系人
    //姓名
    cout << "请输入姓名：" << endl;
    cin >> name;
    adl->personArray[res].m_Name = name;

    //性别
    int sex = 0;
    cout << "请输入性别：" << endl;
    cout << "1 -- 男" << endl;
    cout << "2 -- 女" << endl;
    while (true) {
        //如果输入的为1或2，则退出循环；否则重新输入
        cin >> sex;
        if (sex == 1 || sex == 2) {
            adl->personArray[res].m_Sex = sex;
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
            adl->personArray[res].m_Age = age;
            break;
        } else {
            cout << "输入有误，请重新输入" << endl;
        }
    }

    //电话
    string phone;
    cout << "请输入电话：" << endl;
    cin >> phone;
    adl->personArray[res].m_Phone = phone;

    //地址
    string address;
    cout << "请输入住址：" << endl;
    cin >> address;
    adl->personArray[res].m_Address = address;

    cout << "修改成功" << endl;
    cout << "姓名：" << adl->personArray[res].m_Name << "\t";
    cout << "性别：" << (adl->personArray[res].m_Sex == 1 ? "男" : "女") << "\t";
    cout << "年龄：" << adl->personArray[res].m_Age << "\t";
    cout << "电话：" << adl->personArray[res].m_Phone << "\t";
    cout << "地址：" << adl->personArray[res].m_Address << endl;

    system("clear"); //清屏操作
}


/*
 * 6. 清空联系人
 */
void cleanPerson(AddressLists *adl) {
    adl->m_Size = 0;
    cout << "通讯录已清空" << endl;
    system("clear");
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
                showPerson(&adl);
                break;
            case 3:
                deletePerson(&adl);
                break;
            case 4:
                findPerson(&adl);
                break;
            case 5:
                modifyPerson(&adl);
                break;
            case 6:
                cleanPerson(&adl);
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                return 0;
            default:
                break;
        }
    }
}