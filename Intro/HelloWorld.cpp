#include <iostream>     // 指定要使用的头文件

int main()  // 返回类型（return type） 函数名（function name） 形参列表（parameter list）
{
    // 提示用户输入两个数，输出他们的和
    std::cout << "请输入两个数字：";   // 打印消息，也称字面值常量（string literal）
    int val1 = 0, val2 = 0;     //定义整型变量存储输入
    std::cin >> val1 >> val2;   //接收用户输入并存储
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;    // endl是操纵符（manipulator），结束当前行

    return 0;   // 函数体，返回0一般代表成功
}