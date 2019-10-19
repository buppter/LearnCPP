#include <iostream>

int main1() {
    //整型

    //1. 短整型（short 两字节，-2^15 ~ 2^15 -1, -32768~32767)
    short num1 = 32767;

    //2. 整型（int 四字节， -2^31 ~ 2^31-1)
    int num2 = 32768;

    //3. 常整型（long 四字节(32位系统)  八字节(64位系统)  -2^31 ~ 2^31 - 1）
    long num3 = 10;

    //4. 长长整型（long long 八字节  -2^63 ~ 2^63 - 1）
    long long num4 = 10;

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;
    return 0;
}