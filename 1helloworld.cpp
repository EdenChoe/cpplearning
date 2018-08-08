/*2018年8月4日17:06:24*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, world!" << endl; // endl = end line 可以被‘\n’表示。
    cout << "'\\n'和'<< endl'能换行\n";
    cout << "Hello, world!不换行";
    return 0; // main 函数返回值
}
/*
1.C++ 是 C 的一个超集，事实上，任何合法的 C 程序都是合法的 C++ 程序。

2.面向对象开发的四大特性:封装 抽象 继承 多态

3. GNU 的 C/C++ 编译器，对Windows平台来说即MinGW。

4. gcc for .c  g++ for .cpp
gcc main.cpp -lstdc++ -o main 
g++ helloworld.cpp -o helloworld


5.
对象具有状态和行为。例如：一只狗的状态 - 颜色、名称、品种，行为 - 摇动、叫唤、吃。对象是类的实例。
类可以定义为描述对象行为/状态的模板/蓝图。
方法从基本上说，一个方法表示一种行为。一个类可以包含多个方法。可以在方法中写入逻辑、操作数据以及执行所有的动作。
即时变量,每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。

6. C++ 标识符规则
一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）

不能使用C++的关键词（保留词，e.g. for if 等）

7. 过时的三字符(两个问号开头的三个字符)


*/