#include <iostream>
#include <limits>

int sum_while(int begin, int end);  // 累加和（while循环版本）
int sum_for(int begin, int end);    // 累加和（for循环版本）
int sum_DynamicInput(std::istream& inputStream);     // 读取数量不定的输入数据
void count_continueChar(std::istream& inputStream);   // 统计每个字符在输入流中连续出现了多少次


int main()
{
    std::cout << "sum = " << sum_while(0,10) << std::endl;
    std::cout << "sum = " << sum_for(0,10) << std::endl;
/*
    std::cout << "请输入整数:";
    int sum = sum_DynamicInput(std::cin);   // 使用输入流作为参数
    std::cout << "sum = " << sum << std::endl;
*/
    std::cout << "请输入整数:";
    count_continueChar(std::cin);

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

// 计算从begin到end的累加和（for循环版本）
int sum_for(int begin, int end)
{
    int sum = 0;
    for (begin; begin <= end; begin++)
    {
        sum += begin;
    }
    return sum;
}

// 读取数量不定的输入数据
int sum_DynamicInput(std::istream& inputStream)     // 引用输入流
{
    int sum = 0, value = 0;

    while (inputStream >> value)
    {
        sum += value;
    }

    return sum;
}

// 统计每个字符在输入流中连续出现了多少次
void count_continueChar(std::istream& inputStream)
{
    int currentValue = 0, value = 0;
    if (inputStream >> currentValue)    // 读取第一个值
    {
        int count = 1;
        while (inputStream >> value)
        {
            if (value == currentValue)
                count++;
            else
            {
                std::cout << "数字" << currentValue << "出现了" << count << "次" << std::endl;
                currentValue = value;   // 记住新值
                count = 1;  // 重置计数器
            }
        }
        std::cout << "数字" << currentValue << "出现了" << count << "次" << std::endl;
    }
}