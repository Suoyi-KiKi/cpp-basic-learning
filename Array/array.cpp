#include <iostream>
#include <array>

const int size = 5;
int nums[size];//在栈上申请一个数组，其数组中的大小必须为常数

class array
{
public:
    static constexpr int size_Num = 9;//constexpr 也是表示常量
    //static const int size_Num = 9;//在类中声明数组，还必须是静态的
    int Num[size_Num];
};

//c++ 11 中提供的新的数组声明方式  比原始数组声明方式多得多
std::array<int,5> NUM;
//我们可以用NUM.size() 直接获取数组大小

int main()
{
    int* example = new int[5];
    int num[5];

    std::cout<< sizeof(num)/sizeof(int)<<std::endl;//5

    std::cout<<sizeof(example)/sizeof(int)<<std::endl;//2
    //指针大小和电脑的位数有关 32位电脑一个指针是4个字节

}