#include <stdio.h>
#include <stdlib.h>

double Pow(float n,float k)
{
    // n ^ k = n * n^(k-1)
    if(k > 0) // k > 0
    {
        return n * Pow(n,k-1);
    }
    else if (k < 0) // k < 0
    {
        return (1.0 /(Pow(n,-k))); // k < 0 ,-k > 0
    }
    else if(k == 0) // k == 0 n^k == 1
    {
        return 1.0;
    }
}

int main()
{
    float n;
    float k;
    printf("请输入想要计算的n的k次方e.g(2 4)->2的4次方:>");
    scanf("%f%f",&n,&k);
    double ret = Pow(n,k);
    printf("计算结果为:%lf\n",ret);
    system("pause");
    return 0;
}