#include <stdio.h>
#include <stdlib.h>
// 一
if(0 == flag)
{}
if(0 != flag)
{}
if(0 == Bool)
{}
if(0 != Bool)
{}
if(0 == x)
{}
if(0 != x)
{}
if(0 == (*p))
{}
if(0 != (*p))
{}
// 二
sizeof(str) = 6
sizeof(p) = 4
sizeof(n) 4
sizeof(str) = 4 
sizeof(p) = 4
// 三
// 1、头文件中的 ifndef/define/endif 干什么用？
/* ifndef/define/endif都是为了避免头文件重复引用所造成的内存空间的浪费而使用的
   ifndef表示如果该头文件没有被定义的话，就执行define定义操作，
   endif跟ifndef配对，表示结束语句 
*/
// #include <filename.h> 和 #include “filename.h” 有什么区别？
/*
    #include <filename.h> 表示引用的头文件是属于C/C++语言库中的头文件
    #include "filename.h" 表示引用的头文件是自己所写的filename.h文件
*/
// const 有什么用途？（请至少说明两种）
/*
    1.定义常变量
    2.改变函数的作用域
*/

// 在 C++ 程序中调用被 C 编译器编译后的函数，为什么要加 extern “C”声明？
/*
    因为函数要使用之前需要先声明，由于该函数已经被C编译器编译，所以只能通过extern "C"声明
*/

//请简述以下两个 for 循环的优缺点

// 第一个

for (i=0; i<N; i++)
{
if (condition)
 DoSomething();
else
 DoOtherthing();
}
/*
    优点:
        清晰明白,可以一眼看出循环的次数为N次
    缺点:
        代码内存消耗大，每一次都要进行循环操作与判断操作
*/
// 第二个
if (condition)
{
for (i=0; i<N; i++)
 DoSomething();
}
else
{
 for (i=0; i<N; i++)
 DoOtherthing(); 
 /*
    优点:
        能够大大减少if else的判断操作，节省内存空间
    缺点:
        代码不够简练，稍显臃肿
 */

// 四、有关内存的思考题
// hello world
// h
// X
// X

/*五、编写 strcpy 函数（10 分）
已知 strcpy 函数的原型是
 char *strcpy(char *strDest, const char *strSrc);
其中 strDest 是目的字符串，strSrc 是源字符串。
（1）不调用 C++/C 的字符串库函数，请编写函数 strcpy
（2）strcpy 能把 strSrc 的内容复制到 strDest，为什么还要 char * 类型的返回值？*/

// (1)见high quality c
// (2) 有返回值的话可以用链式访问的方式打印出来看结果

/*六、编写类 String 的构造函数、析构函数和赋值函数（25 分）
已知类 String 的原型为：
 class String
 {
 public:
 String(const char *str = NULL); // 普通构造函数
 String(const String &other); // 拷贝构造函数
 ~ String(void); // 析构函数
 String & operate =(const String &other); // 赋值函数
 private:
 char *m_data; // 用于保存字符串
 };
请编写 String 的上述 4 个函数。*/