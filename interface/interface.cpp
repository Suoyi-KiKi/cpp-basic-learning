// 接口  纯虚函数

#include <iostream>


class Printable
{
    public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
    public:
    //只有将接口中方法实现后 这个类才能够 被实例化
    std::string GetClassName() override
    {
        return "Entity";
    }
};



// 比如我们想实现一个可以打印类的名称的函数： 将类传入进来 然后输出类的名字

void Print(Printable* obj)
{
    std::cout<< obj->GetClassName() <<std::endl;
}