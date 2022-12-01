#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int n;
    long long result = 1;
    int i;
    long long sum = 0;
    printf("请输入N的值:\n");
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        result = result * i; // result的每一次结果为1!到2!...到n！
        sum = sum + result;
    }
    printf("结果为:%lld\n",sum);
    system("pause");
    return 0;
}
*/
/* 错误！
long long Factorial_accumulation(int n)
{
    long long sum = 0;
    if(1 == n)
    {
        return 1;
    }
    else
    {
        return ((Factorial_accumulation(n - 1) * n) + sum);
    }
}

int main()
{
    int n;
    long long sum = 0;
    printf("请输入N的值:\n");
    scanf("%d",&n);
    sum = Factorial_accumulation(n);
    printf("结果为:%lld\n",sum);
    system("pause");
    return 0;

}
*/

int main()
{
    int n;
    int i;
    int j;
    long long sum = 0;
    printf("请输入N的值:\n");
    scanf("%d",&n);
    for(j = 1;j <= n;j++)
    {
        long long result = 1;
        for(i = 1;i <= j;i++)
        {
            result = result * i;
        }
        sum = sum + result;
    }
    printf("结果为:%lld\n",sum);
    system("pause");
    return 0;
}