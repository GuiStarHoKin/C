#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n)
{
    // 试除法2->n-1
    int j;
    for(j = 2;j < n;j++)
    {
        if(n % j == 0)
        {
            return 0;
        }
    }
    return 1;
    /*
    if(j == n) // 一定要是j==n，j>n根本不可能，因为上面是j<n
    {
        return 1;
    } 
    */

    /*int j;
    for(j = 2;j <= sqrt(n);j++)
    {
        if(n % j == 0)
        {
            return 0;
        }
    }
    if(j > sqrt(n))
    {
        return 1;
    }*/
}

int main()
{
    // 打印100-200之间的素数
    int i;
    for(i = 100;i <= 200;i++)//偶数不可能为素数(i % 2 != 0)
    {
        if(is_prime(i) == 1)// 1为素数
        {
            printf("%d ",i);
        }
    }
    system("pause");
    return 0;
}