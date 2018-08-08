/*
storage class specifiers 存储类型标识
旨在定义变量/函数的范围（可见性）和生命周期
存储类型：
auto
register (C++11废弃)
static
extern
mutable
thread_local (C++11)
*/

/*
1. auto 存储类 (貌似被淘汰了？？?)
auto 关键字用于两种情况:
声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。
auto f=3.14;      //double
auto s("hello");  //const char*
*/

/*
2. register 存储类用于定义可能存储在寄存器中而不是 RAM 中的局部变量。
*/

/*
3. static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
a.使用static修饰局部变量可以在函数调用之间保持局部变量的值。
(即重新进入该函数后静态局部变量保持上次调用结束时的值)
b.当static修饰全局变量时，会使变量的作用域限制在声明它的文件内。
(与extern相反？)
c.当static用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。
(保证所有对象都有统一的静态变量)
*/

/*
4.extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
*/

//5.mutable 说明符仅适用于类的对象，这将在本教程的最后进行讲解。它允许对象的成员替代常量。也就是说，mutable 成员可以通过 const 成员函数修改。

//6.使用 thread_local 说明符声明的变量仅可在它在其上创建的线程上访问。 变量在创建线程时创建，并在销毁线程时销毁。 每个线程都有其自己的变量副本。

#include <iostream>

void func(void);
static int count = 10; // 全局静态变量,不能在其他文件中使用 
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}

void func( void )
{
    //只有第一次调用时才初始化，之后调用时保持与上一次调用结束后的值不变。
    static int i = 5; // 局部静态变量（不同调用能保持i的值）
    i++;
    std::cout << "变量 i 为 " << i ;
    std::cout << " , 变量 count 为 " << count << std::endl; //使用namespace中的cout和endl
}

/*
位运算符

&   按位与
|   按位或
~   二进制补码运算符
<<  二进制左移运算符
>>  二进制右移运算符


/=  %=  <<= >>= &=  ^=  |=

特殊运算符

条件运算符
condition? a: b 如果 Condition 为真 ? 则值为 X : 否则值为 Y。

逗号运算符 
ExpressionA,ExpressionB,ExpressionC,  
顺序执行，且整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。

成员运算符
.或者-> 用于引用类、结构和共用体的成员。

指针运算符
&   指针运算符 & 返回变量的地址。例如 &a; 将给出变量的实际地址。
*   指针运算符 * 指向一个变量。例如，*var; 将指向变量 var。
*/

/*
运算符的优先级和结合顺序
*/

/*

for( ; ; )
{}

while(true)
{}

*/