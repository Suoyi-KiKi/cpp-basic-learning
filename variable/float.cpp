#include <iostream>
#include<typeinfo>

int main ()
{
    float num = 9.8f;
    int a = 9;
    std::cout<< typeid(num).name() << std::endl;

}