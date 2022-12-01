#include <stdio.h>
#include <stdlib.h>
// 函数指针数组
int Add(int x,int y)
{
    int z;
    z = x + y;
    return z;
}
int Sub(int x,int y)
{
    int z;
    z = x - y;
    return z;
}
int Mul(int x,int y)
{
    int z;
    z = x * y;
    return z;
}
int Div(int x,int y)
{
    int z;
    z = x / y;
    return z;
}
int main()
{
    int (*p)(int,int) = Add;
    int (*prra[4])(int,int) = {Add,Sub,Mul,Div}; // 函数指针数组
    int i;
    for(i = 0;i < 4;i++)
    {
        int ret = prra[i](2,3);
        printf("%d\n",ret);
    }
    system("pause");
    return 0;
}