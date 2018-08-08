/*
2018年8月4日21:33:41
作用域（scope）

在函数或一个代码块内部声明的变量，称为局部变量。

在函数参数的定义中声明的变量，称为形式参数。

在所有函数外部声明的变量，称为全局变量。
*/

#include <iostream>
using namespace std;
void literal();
int dec();

// 全局变量声明
int g = 20;
int gg;

double add(double add1, double add2) // add1 和 add2 都是形式参数
{
    return add1 + add2;
}
 
int main ()
{
    // 局部变量声明
    int g;
 
    cout << g << endl; //未初始化的局部变量是任意值
    cout << gg << endl; //未初始化的全局变量默认为零
    literal();
    dec();
    return 0;
}

/*
字面量（literal）：常量的标识符

1.整数常量：
0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。
整数常量也可以带一个后缀，U 表示无符号整数（unsigned），L 表示长整数（long）。
后缀可以是大写，也可以是小写，U 和 L 的顺序任意。
85         // 十进制
0213       // 八进制 
0x4b       // 十六进制 
30         // 整数 
30u        // 无符号整数 
30l        // 长整数 
30ul       // 无符号长整数
30LU       // 无符号长整数

2.浮点常量：
小数形式或者指数形式（使用e或者E的科学计数法）
以L或者F结尾
3.14159
314159E-5L

3. 布尔常量：true和false
我们不应简单地把 true 的值看成 1，把 false 的值看成 0。

4.字符常量（单引号单个字符，非字符串）
L'x' 宽字符常量（wchar_t）
'x' 字符常量（char）
\ooo   一到三位的八进制数
\xhh   一个或多个数字的十六进制数

5.在 C++ 中，有两种简单的定义常量的方式：

使用 #define 预处理器。
使用 const 关键字。
*/

void literal()
{
    cout << 3.14159 << endl;
    cout << 314159E-5 << endl;
    cout << '\r' << endl;
    cout << '\x21' << endl;
     cout << '\41' << endl;
    cout << true << endl;
}
/*
6.修饰符 signed、unsigned、long 和 short 可应用于整型；
signed 和 unsigned 可应用于字符型；
long 可应用于双精度型。
*/
int dec()
{
   short int i;           // 有符号短整数
   short unsigned int j;  // 无符号短整数
 
   j = 50000;
 
   i = j;
   cout << i << " " << j <<endl;
 
   return 0;
}
//无符号短整数 50,000 的位模式被解释为有符号短整数 -15,536。

/*
C++ 中的类型限定符

const   
const 类型的对象在程序执行期间不能被修改改变。

volatile
修饰符 volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。

restrict
由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
它是修饰指针的，表达出的意思是，对该指针指向的空间的访问，只能从这个指针进入。这样，如果该关键字在加上restrict，就会达到锁定该空间。
受限指针？
*/