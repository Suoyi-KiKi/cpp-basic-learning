#include <iostream>

class LOG
{
    public:
        const int ErrorLevel = 2;
        const int WarnLevel = 1;
        const int MessLevel = 0;
    private:
        int LogLevel = 0;


    public:
        void  SetLevel(int level)
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

    log.SetLevel(log.MessLevel);//需要一个参数来改变查询等级
    log.PutLog("hello");//将消息输入进去

}