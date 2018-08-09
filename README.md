# C++ 自学笔记

## 环境 sublime text 3 + MinGW + windows

2018年8月8日10:34:37

分别安装MInGW和sublime text3，设置环境变量。在命令行中使用“g++ -v”验证环境变量设置成功。

在sublime text 3中作如下设置：

Tools -> Build System -> New Build System

替换为如下内容。

```
{
    "cmd": ["g++", "${file}", "-o", "${file_path}/${file_base_name}"], 
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c, source.c++",
    "shell": true,
    "variants":
    [
        {
            "name": "Run",
            "cmd": ["g++", "${file}", "-o", "${file_path}/${file_base_name}","&","cmd", "/c", "${file_path}\\\\${file_base_name}.exe"]
        },
        {
            "name": "RunInShell",
            "cmd": ["g++", "${file}","-fexec-charset=gbk", "-o", "${file_path}/${file_base_name}","&", "start", "cmd", "/c" ,"${file_path}\\\\${file_base_name}.exe && pause"]
        }
    ]
}
```
保存为g++.sublime-build。

sublime使用utf-8编码，而系统的命令行却使用GBK编码，造成输出为乱码的情况。
未解决此问题，在编译时需要使用"-fexec-charset=gbk"选项，使得命令行输出的不是乱码。

注意"Run"是在Sublime Text 3命令行中运行，没法使用键盘输入，因此在使用cin时存在诸多问题。
"RunInShell"是在系统命令行中执行。 
