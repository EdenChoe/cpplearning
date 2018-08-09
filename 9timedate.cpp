/*
2018年8月8日21:26:36
时间和日期

类型 clock_t、size_t 和 time_t 能够把系统时间和日期表示为某种整数。结构体类型 tm 把日期和时间以 C 结构的形式保存，tm 结构的定义如下：

*/

#include <iostream>
#include <ctime>
// include <stdlib.h>
  
using namespace std;
 
int main( )
{
    // 基于当前系统的当前日期/时间
    // 自1970年1月1日以来经过的秒数。
    time_t now = time(0);
   
    // 把 now 转换为字符串形式
    char* dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;
 
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间："<< dt << endl;

    cout << "1970 到目前经过秒数:" << now << endl;
 
    tm *ltm = localtime(&now);
 
    // 输出 tm 结构的各个组成部分
    cout << "年: "<< 1900 + ltm->tm_year << endl;
    cout << "月: "<< 1 + ltm->tm_mon<< endl;
    cout << "日: "<<  ltm->tm_mday << endl;
    cout << "时间: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    //system("pause");
    return 0;
}

/*
2018年8月9日16:12:17
#include <stdlib.h>
system("pause"); 
*/