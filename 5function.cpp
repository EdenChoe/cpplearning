/*
2018年8月6日16:05:15

1.参数传递

传值调用（没有影响且最常见）
该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。

指针调用 （有影响）
该方法把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。

引用调用 （有影响）
该方法把参数的引用复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。

PS：引用本质是别名，不同于指针，引用必须被初始化且不能为空。


2.参数的默认值 （C语言不支持）
如下列函数sum，形式参数b的默认值为20, i.e., sum(10)等价于sum(10,20);

int sum(int a, int b=20)
{
  int result;
 
  result = a + b;
  
  return (result);
}

3.Lambda 函数与表达式(C++11)

本质上是一种匿名函数，又称为Lambda 表达式，和python类似。
Lambda 表达式把函数看作对象。Lambda表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。

Lambda表达式的形式：
[capture](parameters)->return-type{body}
或者没有返回值时：
[capture](parameters){body}

合法的lambda表达式：
[](int x, int y){ return x < y ; }
[]{ ++global_x; } 
[](int x, int y) -> int { int z = x + y; return z + x; }
PS：圆括号里面是参数表，花括号里面是函数体，返回值的类型可以被明确指出也可以不指明。

capture的作用
在Lambda表达式内可以访问当前作用域的变量，这是Lambda表达式的闭包（Closure）行为。
[x, &y] // x以传值方式传入（默认），y以引用方式传入。
[&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
[=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。

由于版本问题需要使用如下编译语句
$ g++ -std=c++11  main.cpp -o main

4. "unsigned" 等价于 "unsigned int"

5. C++ 内置函数 cmath
    1   double cos(double);
    2   double sin(double);
    3   double tan(double);
    4   double log(double);
    5   double pow(double, double); //幂
    6   double hypot(double, double); //平方和的平方根
    7   double sqrt(double); //平方根
    8   int abs(int); //整数的绝对值
    9   double fabs(double); //浮点数的绝对值
    10  double floor(double); //下取整

cmath还有很多函数，详见http://www.cplusplus.com/reference/cmath/

6.C++ 随机数
C Standard General Utilities Library stdlib

stdlib包含srand和rand函数用于生成随机数。
一个是 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用 srand() 函数进行初始化。

srand() The pseudo-random number generator is initialized using the argument passed as seed.

最常见的种子是使用时间种子，即利用ctime中的time函数获得系统时间作为种子。

*/
#include <iostream>
#include <cmath> 
//数学中多种常用函数
#include <ctime>
//time()
#include <cstdlib>
//随机数生成所需要的rand()和srand()函数
using namespace std;

void abssort(float* x, unsigned n)
{  
    sort(x, x + n,[](float a, float b) {return (abs(a) < abs(b));}); 
    //sort 函数可以以一个函数作为参数
    //这里的lambda表达式本质就是一个函数
}  


int sum(int a, int b = 20)
{
    return a+b;
}

int main()
{

    cout << sum(10) << endl;
    return 0;
}