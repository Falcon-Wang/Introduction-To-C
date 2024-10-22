#include <iostream>

std::string scope = "outer";    // scope拥有全局作用域
int main()
{
    int sum = 0, value, units = 0;    // 变量定义
    int num = 1;    // 变量初始化：创建变量时赋予初始值
    sum = num;    // 赋值：擦除对象当前值，以新值替代

    /*
    C++11新特性：列表初始化
    以下四种初始化方式均合法
    */
    int a = 0;
    int b = {0};
    int c(0);
    int d{0};

    long double pi = 3.1415926535;
    //int e{pi}, f = {pi};    // 错误，可能丢失精度
    int e(pi), f = pi;  // 正确执行，但丢失精度

    extern int i;   // 声明变量i
    int j;  //声明并定义变量j

    // 作用域
    std::string scope = "inner";  // 块作用域变量scope覆盖全局变量scope
    std::cout << "Outer Scope Value:" << ::scope << "\nInner Scope Value:" << scope << std::endl;

    // 引用
    int &refNum = num;  // 变量 refNum 引用了变量 num

    // 指针
    int *ip1 = nullptr, *ip2;     // 指向int类型对象的指针
    double *dp1, *dp2;  // 指向double类型对象的指针

    int val = 1;
    *ip1 = val;     // TODO
}