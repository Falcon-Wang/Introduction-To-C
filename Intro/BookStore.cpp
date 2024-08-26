#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;   // 保存下一条交易记录
    if (std::cin >> total)
    {
        Sales_item trans;   // 和
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans; //累加ISBN相同的记录
            }else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }else
    {
        std::cerr << "未检测到输入" << std::endl;
    }

    return 0;
}