// 24:19 P24

#include <stdio.h>
#include <stdlib.h>

int count_bit_one(int num)
{
    int count = 0;
    while(num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}

int main()
{
    int num;
    int count = 0;
    printf("请输入一个整数:>");
    scanf("%d",&num);
    count = count_bit_one(num);
    printf("该整数的二进制中1的个数为:>%d\n",count);
    system("pause");
    return 0;

}