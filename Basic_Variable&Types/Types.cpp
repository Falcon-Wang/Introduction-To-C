#include <iostream>

int main()
{
    // 自动类型转换
    bool b = 30;    // bΪtrue
    int i = b;      // i = 1
    i = 3.14;       // i = 3
    double pi = i;  // i = 3.0
    unsigned char c = -1;   // c = 255
    signed char c2 = 256;   // Undefined
    std::cout << c << std::endl;


    // 字面值
    int n1 = 024;   // 八进制，20
    int n2 = 0x14;  // 十六进制，20
    double d1 = 1.23e5;     // 科学计数法，等价于1.23*10^5
    std::cout << d1 << std::endl;   // 123000
    std::cout << "Hello" "World" << std::endl;  // 两个字符串是一个整体
}