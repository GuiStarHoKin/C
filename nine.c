#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int count = 0;
    for(i = 1;i <= 100;i++)// 统计1-100之间数字9出现的次数
    {
        if(i % 10 == 9)// 获取个位都为9的数
        {
            count++;
        }
        if(i / 10 == 9)// 要注意99，所以这里只能用if并列结构，不能用if else if 结构
        {
            count++;// 获取十位都是9的数
        }
    }
    printf("次数为:%d\n",count);
    system("pause");
    return 0;
}