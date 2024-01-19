#include <iostream>

class Player//后面不需要跟上括号
{
public://类中的变量默认是私有的必须加上 public
    int x,y;
    int speed;

    void Move(int a ,int b)
    {
        x = x *a;
        y = y *b;
    }


};//注意此处一定要有分号

void Move(Player& player,int a ,int b)//和上面一个作用,此处为 引用传值
{
    player.x *= a;
    player.y *= b;
}



int main ()
{
    Player player;

    Player player1;

    player.speed = 1;
    player.x = 9;
    player.y = 7;

    player1.x = 8;
    player1.y = 8;

    player.Move(6,7);
    Move(player,6,7);
    Move(player1,5,6);

    std::cout << player.x<<std::endl;
    std::cout << player.y<<std::endl;

    std::cout << player1.x<<std::endl;
    std::cout << player1.y<<std::endl;





}