#include <stdio.h>
#include <stdlib.h>
/*
利用异或的加密方法
a:  011
b:  101
a^b:110 ^ 101 -> 011
    110 ^ 011 -> 101
*/

int main()
{
    int a;
    int b;
    a = 3;
    b = 5;
    printf("before:\ta = %d b = %d\n",a,b);
    a = a^b; // 密码子
    b = a^b; // 密码子^b->a
    a = a^b; // 密码子^a->b
    printf("after:\ta = %d b = %d\n",a,b);
    system("pause");
    return 0;
}