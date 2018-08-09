# C++ 自学笔记

2018年8月8日10:34:37

sublime使用utf-8编码，而系统的命令行却使用GBK编码，造成输出为乱码的情况。
未解决此问题，在编译时需要使用"-fexec-charset=gbk"选项，使得命令行输出的不是乱码。

在sublime 3中作如下设置：

Tools -> Build System -> New Build System

替换为如下内容。

```
{
    "cmd": ["g++","-Wall", "${file}","-fexec-charset=gbk", "-o", "${file_path}/${file_base_name}"], 
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c, source.c++",
    "shell": true,
    "variants":
    [
        {
            "name": "Run",
            "cmd": ["g++","-Wall", "${file}", "-o", "${file_path}/${file_base_name}","&","${file_path}/${file_base_name}"]
        },
        {
            "name": "RunInShell",
            "cmd": ["g++","-Wall", "${file}","-fexec-charset=gbk", "-o", "${file_path}/${file_base_name}","&", "start", "${file_path}/${file_base_name}"]
        }
    ]
}
```
保存为g++.sublime-build。
