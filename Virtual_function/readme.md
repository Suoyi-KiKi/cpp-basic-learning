### 虚函数

一个父类A，B是他的子类，如果在A类中间创造一个方法，标记为virtual
我们可以选择在B类中重写这个方法

虚函数引入一种叫Dynamic Dispatch（动态编联）的东西，其通过v表（虚函数表）来实现编译，
v表是一个表，包含子类中所有虚函数的映射，使得我们在它运行的时候，将他们映射到正确的覆写（overload）函数

虚函数的引用会引起额外的开销：
1. 引起额外的内存来储存v表 类中还会有个成员指针来指向v表
2. 每次调用虚函数的时候都要遍历整个v表，来确定调用哪个函数

### 成员变量初始化列表： https://cloud.tencent.com/developer/article/1784607
```c++
class Player: public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        :m_Name(name) {}

    std::string GetName() {return m_Name;}
}

//在构造函数中进行初始化，才是真正的初始化，其他方式都是赋值，会创建一个临时对象，然后再将临时对象拷贝进去
//const 成员变量和 引用都必须在 成员初始化列表中进行初始化。
//初始化的顺序和初始化列表中自己写的顺序无关，只和这个变量声明时的顺序有关

```

### ::  .  ->用法区别：
https://blog.csdn.net/hongsejiaozhu/article/details/131967127

https://stackoverflow.com/questions/4984600/when-do-i-use-a-dot-arrow-or-double-colon-to-refer-to-members-of-a-class-in-c

https://www.bilibili.com/video/BV1BV411P7b8/?

常见使用方法
1. 默认为全局域
```c++
int a = 10;//定义一个全局变量
int main ()
{
    int a = 2;
    std::cout << ::a;//这时候打印为10
}
```
2. 命名空间

```c++
int a = 10;//定义一个全局变量
namespace A
{
    int a = 4;
}
int main ()
{
    int a = 2;
    std::cout << A::a;//这时候打印为4
}
```
3.类与双冒号
```c++
class A
{
    public: 
    static int num;//必须静态 否则 例化的时候又是一个没有初始化的值

}
int A::num = 0;//

int main()
{
    A a;
    std::cout<< a.num;//打印出来为0
}


```

