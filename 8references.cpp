/*
2018年8月8日21:09:34
引用 Reference C语言中没有

1.引用的本质就是一个变量的别名。

不存在空引用。引用必须连接到一块合法的内存。
（引用不为空）
一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
（引用不可变）
引用必须在创建时被初始化。指针可以在任何时间被初始化。
（说明必须初始化）

2.引用被作为函数参数时，函数可以通过引用修改其值。(和指针类似)

3.引用还可以作为函数的返回值，这样，函数就可以放在赋值语句的左边。
PS：只能返回static变量或者全局变量的引用


int& func() {
   int q;
   //! return q; // 在编译时发生错误
   static int x;
   return x;     // 安全，x 在函数作用域外依然是有效的
}

*/

#include <iostream>
 
using namespace std;


void swap(int& x, int& y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
}
 
int main ()
{
   // 声明简单的变量
   int    i;
   double d;
 
   // 声明引用变量
   int&    r = i; 
   double& s = d;
   //这里&读作引用
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
 
   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;
   
   return 0;
}