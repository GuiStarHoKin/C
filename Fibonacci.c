#include <stdio.h>
#include <stdlib.h>

long long Fibonacci(int n)
{
    if(1 == n || 2 == n) //需要两个递归出口
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    int n;
    long long result;
    printf("请输入需要求到的Fibonacci的项数:\n");
    scanf("%d",&n);
    result = Fibonacci(n);
    printf("结果为:%lld\n\n",result);
    system("pause");
    return 0;
}