
#include <iostream>
#include <string>

class Entity
{
    public:
    virtual std::string GetName()//告诉编译器 生成V表，如果其被overload了，其可以指向正确的函数
    {
        return "Entity";
    }
};

class Player: public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        :m_Name(name) {}//成员初始化

    std::string GetName() override   
    {
        return m_Name;
    }//这个overrid不是必须的，但是其可以让代码增加可读性 还可以防止我们造成拼写错误等会引起非虚函数的覆写
};

void PrintName(Entity* entity) //用来调用执行 Entity变量内部的 GetName()方法
//继承中讲到 如果一个函数需要父类的对象作为参数 ，我们也可以将子类传入进去
{
    std::cout<<entity->GetName()<<std::endl;
}

int main ()
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("RCK");
    
    PrintName(p);

    Entity* entity = p; //声明一个Entity类型的指针 但他实际上是一个Player p
    PrintName(entity); 
}