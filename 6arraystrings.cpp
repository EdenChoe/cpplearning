/*
2018年8月8日15:11:21
数组和字符串

1.数组
    数组说明方法：
    double balance[10];
    double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

    索引从0开始

    <iomanip>的setw()函数，Sets the field width to be used on output operations.
    
    int arr[5][5]; //多维数组
    int arr[5][5][5];

2.
字符串以'\0'结尾的字符数组（以null结尾）。

字符串操作常用函数：

strcpy(s1, s2);复制字符串 s2 到字符串 s1。（反向复制）

strcat(s1, s2);连接字符串 s2 到字符串 s1 的末尾。（永远都是修改第一个？）

strlen(s1);返回字符串 s1 的长度。

strcmp(s1, s2);如果 s1 和 s2 是相同的，则返回 0；如果 s1 < s2 则返回值小于 0；如果 s1 > s2 则返回值大于 0。

strchr(s1, ch);返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
（望文生义，在string s1中找char  ch）

strstr(s1, s2);返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。

3. C++的string类
C++ 标准库提供了 string 类类型，支持上述所有的操作，另外还增加了其他更多的功能。
string1 + string2 相当于 strcat(string1, string2)
string1.size() 相当于 strlen(string1)

PS:string.size()和strlen()返回的都是‘\0’的index+1，sizeof()返回整个字符数组的长度，即将'\0'之后的也计算在内。
*/

#include <iostream>
#include <iomanip>
using namespace std;
#include <cstring>

 
int main()
{
   int n[ 10 ];      
   for ( int i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100;
   }

   cout << "Element" << setw(13) << "Value" << endl; 
   //"Value"的宽度被设置成13，所以前面有8个空格。 
   for ( int j = 0; j < 10; j++ )
   {
    
      cout << setw( 7 )<< j << setw( 13 ) << n[j] << endl;
   }


    char str1[15] = "Hello";
    char str2[15] = "World";
    char str3[15];
    int  len,size ;
 
   // 复制 str1 到 str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
 
   // 连接 str1 和 str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
 
   // 连接后，str1 的总长度
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
   size = sizeof(str1);
   cout << "sizeof(str1): " << size << endl;
   return 0;
}

