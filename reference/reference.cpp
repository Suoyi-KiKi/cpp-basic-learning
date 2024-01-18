#include <iostream>

// int main ()
// {
//     int a = 9;

//     int& ref = a; //创建引用关系 ref实际不存在 相当于 *a  不占用地址  相当于代号

//     ref = 8;

//     std::cout<<a;

// }

void LOG(int a) // 直接传值 没有返回 相当于函数内部又定义了 int a = 9;
{
    a++;
}

void LOG1(int* a) //指针传值 将地址传入 直接操作内存
{
    (*a)++;
}

void LOG2(int& a) // 引用传值 
{
    a++;
}

int main ()
{
    int a ,b,c;
    a = b = c = 9;


    LOG(a);
    LOG1(&b);
    LOG2(c);

    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;



}