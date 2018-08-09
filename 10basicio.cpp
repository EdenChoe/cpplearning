/*
2018年8月9日10:57:15
输入输出
<iostream> 中定义了 cin、cout、cerr 和 clog 对象。（输入输出错误报告和日志）

<iomanip> 通过所谓的参数化的流操纵器（比如 setw 和 setprecision，为了好看？）

<fstream> 为用户控制的文件处理声明服务。（将程序的结果输出到文件中去？）


cout 对象"连接"到标准输出设备，默认通常是黑框。

标准输入流
cin 对象附属到标准输入设备，通常是键盘。cin 是与流提取运算符 >> 结合使用的.

非缓冲标准错误流
cerr 对象附属到标准错误设备，通常默认也是黑窗显示屏，但是cerr对象是非缓冲的，且每个流插入到cerr都会立即输出。
且之后的代码会继续执行。

缓冲标准错误流
clog 对象附属到标准错误设备，通常也是显示屏，但是 clog 对象是缓冲的。
*/

#include <iostream>
//#include <stdlib.h>
using namespace std;
 
int main( )
{
    char name[50];
    cout << "请输入您的姓名:";
    cin >> name;
    //注意上面尖括号的方向
    cout << "您好！尊敬的" << name << "先生/女士" << endl;

    char str[] = "Something happened....";

    clog << "Warning message : " << str << endl;

    cerr << "Error message : " << str << "again" << endl;

    cout << "你猜，cerr 之后的代码还执行吗？" << endl;
    
    //system("pause");
    return 0;
}
