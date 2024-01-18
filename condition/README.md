if语句和分支通常有比较大的开销，很多优化的代码将避免使用分支

调试的时候 进入反汇编视角 可以更清晰看到cpu的处理  

如果想检验指针是否为空  就可以进行判断指针是否为 null
```c++
const char* ptr = 0; // 或者写为 const char* ptr = nummptr;
if(ptr)
    ....
```
后面的code就不会被执行

只有 if  else ，没有所谓的 else if ,else if 不是关键词，等于先else 再if, else if = else {if ...}