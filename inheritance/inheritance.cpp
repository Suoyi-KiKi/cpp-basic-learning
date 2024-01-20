#include <iostream>

class Entity
{
    public:
    float X,Y;
    
    void Move()
    {
        X+=4;
        Y+=7;
    }

};

//定义的子类只能继承 父类中的public部分

class Player : public Entity//此处要加上 public 否则继承的子类不能访问父类中定义的方法
{
    public:
    Player()
    {
        X = 0;
        Y = 0;
    }
    void Print()
    {
        std::cout<< X <<","<< Y<<std::endl;
    }

};

int main()
{
    Player player;

    player.Move();
    player.Print();

}