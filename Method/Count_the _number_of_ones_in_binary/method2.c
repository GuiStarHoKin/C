#include <stdio.h>
#include <stdlib.h>

int count_bit_one(unsigned int num)
{

    int count = 0;
    while(num)
    {
        if(1 == (num % 2))
        {
            count++;
        }
        num /= 2;
    }
    return count++;
}

int main()
{
    int num;
    int count = 0;
    printf("请输入一个整数:>");
    scanf("%d",&num);
    count = count_bit_one(num);
    printf("二进制中1的个数为:%d\n",count);
    system("pause");
    return 0;
}