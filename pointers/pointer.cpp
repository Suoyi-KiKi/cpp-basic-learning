#include <iostream>
#include <cstring>

int main ()
{ 
//    void* ptr = 0;  //等于0意味着这个指针无效  0不是一个有效的内存地址  void 表示无类型
//  void* ptr = null;  同上面的写法一个意思
//  void* ptr = nullptr; 同上

    // int a = 8;
    // void* ntr = &a;

    char* buffer = new char[8];//动态分配一个8字节的内存 并返回其地址
    memset(buffer,'a',8); //接收一个指针， 在8个字节每一个字节的位置上填上4

    std::cout << buffer;

    //使用完成后对内存进行删除

    delete[] buffer;


}