#include <stdio.h>
#include <stdlib.h>

int main()
{
    // P8 28:56 辗转相除法
    int m;// 24
    int n;// 18
    int r;
    printf("请输入两个整数,以获取两个整数之间的最大公约数:\n");
    scanf("%d%d",&m,&n);
    while(m % n)// 当m % n != 0 时恒循环
    {
        r = m % n;//6 = 24 % 18
        m = n;
        n = r;
    }
    printf("最大公约数为:%d\n",n);
    system("pause");
    return 0;
}