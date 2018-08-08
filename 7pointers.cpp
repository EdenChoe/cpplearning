/*
2018年8月8日19:25:43
指针与引用

1.指针可以被定义为空，即NULL。 (NULL全大写)
NULL 指针是一个定义在标准库中的值为零的常量。
在大多数的操作系统上，程序不允许访问地址为0的内存，因为该内存是操作系统保留的。如果指针包含空值（零值），则假定它不指向任何东西。
if(ptr)      如果 ptr 非空，则完成 。。。
if(!ptr)     如果 ptr 为空，则完成 。。。

2.指针的运算

假设 ptr 是一个指向地址 1000 的整型指针，是一个 32 位的整数。在"ptr++"后，ptr 将指向位置 1004，因为 ptr 每增加一次，它都将指向下一个整数位置，即当前位置往后移 4 个字节。 *(++ptr) 相当于 ptr[1]

指针可以用关系运算符进行比较，如 ==、< 和 >。这里比较的是地址值。

3.指针与数组的关系
*(var + 2) 就相当于 var[2] 
*(var + 2) = 500; 就相当于var[2] = 500;

4.指针数组
int *ptr[MAX]; //数组里面都是指针，而不是指向数组的指针。

5.指向指针的指针

int **var;

6.将指针作为参数传递给函数后，该函数可以使用该指针修改该指针指向的内存中的值。

7.函数的返回值也可以是指针。
请注意C++只允许返回函数中static变量的地址。因为除了static变量外的其他变量都在函数调用结束后销毁了。

*/

#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var1;
   char var2[10];
   cout << "var1 变量的地址： ";
   cout << &var1 << endl;
   cout << "var2 变量的地址： ";
   cout << &var2 << endl;

   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
   ip = &var;       // 在指针变量中存储 var 的地址
   cout << "Value of var variable: ";
   cout << var << endl;
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   ip = NULL;
   cout << ip << endl;


   int  var3[] = {10, 100, 200};
   int  *ptr;
   // 指针中第一个元素的地址
   ptr = var3;
   int i = 0;
   while ( ptr <= &var3[2] )
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
      // 指向上一个位置
      ptr++;
      i++;
   }
   return 0;
}