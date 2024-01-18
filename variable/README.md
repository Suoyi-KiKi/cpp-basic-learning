char 1
short 2 
int 4
long 通常为4 取决于编译器
long long 8

float 4
double 8

如果这样声明变量：
```c++
float num = 9.8;
```
num是float的，但是9.8是double，使用等号赋值，double自动转float，类型收窄精度损失,可以使用 
```c++
float num = 9.8f;
```




### 今日报错：
平台：Ubuntu + vscode

报错： 进行调试的时候，出现：终端将被任务重用 + 弹窗 preLaunchTaskC/C++:gcc生成活动文件"已终止，退出代码为-1。

尝试：在task.json 中将 "panel": "shared", 改为"new"  无用
后发现在报错中 undefined reference to `std::cout'

解决：  在task.json 中此处的gcc改为如此形式  "command": "/usr/bin/g++"

教训：不要一直注意最后的报错信息，报错要将中间的所有报错信息都过一次