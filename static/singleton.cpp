//单例类  只存在一个实例的类

#include <iostream>

class Singleton
{
private:
    static Singleton* s_Instance;//定义一个Singleton类型的指针变量，名字为 S_Instance 
public:
    static Singleton& get()//定义一个函数 返回类型为一个Singleton类型的引用，函数名为get,
    {
        return *s_Instance;//在定义后相当于返回自身
    }

    static void hello()
    {
        std::cout<<"This is singleton"<<std::endl;

    }


};


//简洁版：
class Singleton1 
{
    public:
    static Singleton1& get()
    {
        static Singleton1 instance; //如果没有这个static，instance这个实例在括号结束的时候就会被销毁
        return instance;
    }

    static void hello()
    {
        std::cout<<"This is singleton1"<<std::endl;
    }

};

Singleton* Singleton::s_Instance = nullptr;//使用了static的类中的变量要进行定义
//Singleton* 表示类型  Singleton::s_Instance 为 类中的哪一个类全局变量

int main ()
{
    Singleton::get().hello();

    Singleton1::get().hello();
}