#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int PowAdd(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return PowAdd(n - 1) + pow(2,n);
    }
}

int main()
{
    int n;
    long long int result;
    printf("请输入你想从2^0次方累加到的2^n的(n)值:\n");
    scanf("%d",&n);
    result = PowAdd(n);
    printf("结果为%lld\n\n",result);
    system("pause");
    return 0;
}