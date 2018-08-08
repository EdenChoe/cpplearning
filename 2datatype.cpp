/*
2018年8月4日17:41:28
C++ 数据类型
七种基本数据类型： bool char int float double void(??) wchar_t(宽字符型)
修饰词 signed unsigned short long
不同编译器和平台中的每个数据类型变量的长度是不确定的。
*/
#include<iostream>
#include<string>
#include <limits>
using namespace std;
int emtext();
int variables();
int main()
{

    cout << "type: \t\t" << "************size**************"<< endl; // 注意‘<<’的作用，即连接字符串。

    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    
    cout << "type: \t\t" << "************size**************"<< endl;

    emtext();
    variables();//通过调整variables()函数的位置能看到未初始化未赋值的变量的值是不确定的

    return 0;  
}
/*
1.short 本质是短的整型（int）

2. typedef <type> <newname>; 相当于给<type>取一个新名字 <newname>

3. 枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
声明方法如下：
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;
本质上就是定义了一个标识符的集合，然后给每个元素指定一个整数常量。（不指定整数常量，默认0 1 2 3）
*/

int emtext()
{ 
    enum color { red, white, yellow, balck=9, green=2, blue };
    color c = green;
    cout <<'\n'<< red << white << yellow << balck << green << blue << endl; // 注意这里的yellow 和 green 都被指定为整数2
    return 0;
}

/*
4. float  1位符号，8位指数，23位小数。 一共32位（4字节）

5. double  1位符号，11位指数，52位小数。 （8字节）

6.为初始化且为赋值的变量的值是不确定的，即任意的。
*/


int variables()//通过调整variables()函数的位置能看到未初始化未赋值的变量的值是不确定的
{
    bool b;
    char ch;
    int i;
    float f;
    double d;
    // void v; //很明显void 这个类型分特殊
    wchar_t wch;
    cout << "初始值:"<< endl;
    cout << b << endl;
    cout << ch << endl;
    cout << i <<endl;
    cout << f <<endl;
    cout << d <<endl;
    cout << wch << endl;
    return 0;
}

/*
7. extern 关键词

fileA.cpp中有
extern int i = 1; // 定义并初始化变量i，其他文件可以访问该变量。

fileB.cpp中有
extern int i; //fileB中可以使用fileA中的变量i，向编译器声明“我这里的i是在其他文件的某个地方初始化的变量”

8.左值 和 右值

一个变量出现在等号左边时为“左值”，也就是该变量对应的内存位置；
一个变量出现在等号右边时为“右值”，也就是该变量对应的内存位置中存储的具体值；
*/