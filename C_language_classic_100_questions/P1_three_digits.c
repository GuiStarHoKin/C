/*
题目:有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数?都是多少？
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bit, ten, hundred;
    int count =  0;
    for (hundred = 1; hundred <= 4; hundred++)
    {
        for (ten = 1; ten <= 4; ten++)
        {
            for (bit = 1; bit <= 4; bit++)
            {
                if (hundred != ten && hundred != bit && ten != bit)
                {
                    printf("%d %d %d\n", hundred, ten, bit);
                    count++;
                }
            }
        }
    }
    printf("三位各不相同的数有:%d个\n",count);
    system("pause");
    return 0;
}