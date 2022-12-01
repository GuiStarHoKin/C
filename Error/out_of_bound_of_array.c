#include <stdio.h>
#include <stdlib.h>

/*
VS6.0下 <= 10死循环
gcc下 <=11死循环
VS2013下 <=12死循环
*/
int main() // 1:43:40
{
    int i = 0;// 先创建先使用栈的高地址
    int arry[] = {1,2,3,4,5,6,7,8,9,10};// 后使用栈的低地址
    for(i = 0;i <= 11;i++) // gcc 下 i 在11的位置，空了一个格子
    {
        printf("hehe\n");
        arry[i] = 0;
    }
    system("pause");
    return 0;
}