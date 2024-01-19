#include <iostream>

class LOG
{
    public:
        // const int ErrorLevel = 2;
        // const int WarnLevel = 1;
        // const int MessLevel = 0;
        enum Level:unsigned char
        {
            MessLevel=0,WarnLevel,ErrorLevel
        };


    private:
        int LogLevel = MessLevel;


    public:
        void  SetLevel(Level level)//使用枚举的好处，就是可以防止 传值不符合规定
        {
            LogLevel = level;
        }

        void PutLog(const char* Message)
        {
            if(LogLevel <= ErrorLevel)
                std::cout<<"[ERROR]"<<Message<<std::endl;
            if (LogLevel <= WarnLevel)
                std::cout<<"[WARN]"<<Message<<std::endl;
            if (LogLevel <= MessLevel)
                std::cout<<"[MESSAGE]"<<Message<<std::endl;
            
        }

};

int main ()
{
    //首先构思要用这个类干什么
    LOG log;

    log.SetLevel(LOG::MessLevel);// 注意此处传值形式 为 类名::枚举中的值

    log.PutLog("hello");//将消息输入进去

}