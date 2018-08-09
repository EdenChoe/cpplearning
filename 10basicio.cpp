/*
2018年8月9日10:57:15
输入输出
<iostream> 中定义了 cin、cout、cerr 和 clog 对象。（输入输出错误报告和日志）

<iomanip> 通过所谓的参数化的流操纵器（比如 setw 和 setprecision，为了好看？）

<fstream> 为用户控制的文件处理声明服务。（将程序的结果输出到文件中去？）


cout 对象"连接"到标准输出设备，默认通常是黑框。
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main( )
{
   char name[50];
   cout << "请输入您的姓名";
   cin >> name;
   cout << "您好！" << name << endl;
   system("pause");
   return 0;
}
