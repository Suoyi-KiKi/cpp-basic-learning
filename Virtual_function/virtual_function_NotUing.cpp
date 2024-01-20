//不用虚函数
#include <iostream>
#include <string>

class Entity
{
    public:
    std::string GetName()
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

    std::string GetName() {return m_Name;}//相当于多态
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

    Player* p = new Player("RCK");//不会打印 RCK 因为方法通常在类的内部起作用，当调用方法的时候
    //会调用属于类型为Entity类型所以也会调用 Entity类中的 Get Name函数
    PrintName(p);

    Entity* entity = p; //声明一个Entity类型的指针 但他实际上是一个Player
    PrintName(entity); 
}