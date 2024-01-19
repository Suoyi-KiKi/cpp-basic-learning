#include <iostream>

class Entity
{
public:
    static int x,y;

    static void  Print()
    {
        std::cout<<x<<","<<y<<std::endl;
    }

};

int Entity::x;
int Entity::y;//类中的static变量需要进行定义

int main ()
{
    Entity e;

    e.x = 3;
    Entity::y = 4;//两种方法都能对值进行修改  最好写成 ::形式 表示类中的全局变量

    Entity::x = 9;
    e.y = 0;

    e.Print();
    Entity::Print();//表示类中的全局方法

    // 当x，y为非静态的时候，就会报错， 因为静态方法不能调用非静态变量



}