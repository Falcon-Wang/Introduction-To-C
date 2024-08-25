#include <iostream>

int sum_while(int begin, int end);

int main()
{
    std::cout << "sum = " << sum_while(0,10) << std::endl;
}

// 计算从begin到end的累加和（while循环版本）
int sum_while(int begin, int end)
{
    int sum = 0;    // 累加和

    while (begin <= end)
    {
        sum += begin++; // 等价于 sum = sum + begin; begin++;
    }
    return sum;
}