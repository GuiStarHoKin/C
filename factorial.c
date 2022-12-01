#include <stdio.h>
#include <stdlib.h>

/* for循环实现
int main()
{
    int n;
    int i;
    long long sum = 1;
    printf("请输入N的值:\n");
    scanf("%d",&n);
    for(i = 1; i <= n;i++)
    {
        sum = sum * i;
    }
    printf("结果为:%lld\n",sum);
    system("pause");
    return 0;
}
*/

long long Factorial(int n)
{
    if(1 == n)
    {
        return 1;
    }
    else
    {
        return (Factorial(n - 1) * n);
    }
}

int main()
{
    int n;
    long long result;
    printf("请输入N的值:\n");
    scanf("%d",&n);
    result = Factorial(n);
    printf("结果为%lld\n",result);
    system("pause");
    return 0;
}