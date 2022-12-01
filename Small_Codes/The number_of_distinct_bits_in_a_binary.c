#include <stdio.h>
#include <stdlib.h>

int count_dis_bit(int n,int m)
{
    int temp = n ^ m;
    int count = 0;
    while(temp)
    {
        temp = temp&(temp-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    int m;
    int count;
    printf("请输入两个数:>");
    scanf("%d%d",&n,&m);
    count = count_dis_bit(n,m);
    printf("两个整数二进制中不同位的个数为:%d\n",count);
    system("pause");
    return 0;
}