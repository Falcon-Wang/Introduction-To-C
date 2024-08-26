#include <iostream>
#include "Sales_item.h"     // 包含自定义头文件

void ioOperation(Sales_item book);  // Sales_item类基础IO
int Multiply(Sales_item item1, Sales_item item2); // Sales_item对象加法

int main()
{
    Sales_item book;    // 初始化Sales_item对象
    ioOperation(book);

    Sales_item item1, item2;
    Multiply(item1, item2);

    return 0;
}

// Sales_item类基础IO
void ioOperation(Sales_item book)
{
    std::cout << "请输入一条记录:";
    // Exp input: 0-201-70353-X 4 24.99
    std::cin >> book;   // 读入ISBN号、售出册数和单价
    // Exp output: 0-201-70353-X 4 99.96 24.99
    std::cout << book << std::endl;     // 输出ISBN号、售出册数、总价和单价
}

// Sales_item对象加法
int Multiply(Sales_item item1, Sales_item item2)
{
    std::cout << "请输入两条记录:" << std::endl;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn())   // 调用成员函数
    {
        std::cout << item1 + item2 << std::endl;    // ISBN相同的情况下，单独计算两个对象的结果并累加
        return 0;
    }
    std::cerr << "ISBN不一致" << std::endl;    // 抛出运行时异常
    return -1;
}