#include <stdio.h>
#include <stdlib.h>

/*long long count = 0;
long long fibo(int n)
{
    if(3 == n)// 测试第3个斐波那契数在求第40项的时候被计算了多少次
    {
        count++;
    }
    if((1 == n)||(2 == n))
    {
        return 1;
    }
    else
    {
        return febo(n - 1) + febo(n - 2);
    }
}*/

/*long long fib(int n)
{
    int i;
    long long a = 1;
    long long b = 1;
    long long c = 2;
    for(i = 4;i <= n;i++)// 键爷牛b 32:40要求第4位开始要重复的动作放for循环
    {
        a = b;
        b = c;
        c = a + b;        
    }
    if(n >= 4)
    {
        return c;
    }
    if(1 == n)
    {
        return 1;
    }
    if(2 == n)
    {
        return 1;
    }
    if(3 == n)
    {
        return 2;
    }
}*/

long long fib(int n)
{
    long long a = 1;
    long long b = 1;
    long long c = 1;
    while(n > 2)// 鹏哥牛b
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n;
    printf("想求斐波那契第几项?:>");
    scanf("%d",&n);
    long long ret = fib(n);
    printf("ret = %lld\n",ret);
    //printf("count = %lld\n",count);
    system("pause");
    return 0;
}