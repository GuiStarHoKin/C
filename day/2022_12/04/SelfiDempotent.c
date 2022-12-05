// 1-100000之间的自幂数
#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    for(i = 1;i <= 10000;i++)
    {
        // 1.先算出i的位数n
        int n = 1; //一个数都有一位
        int sum = 0;
        int temp = i;
        while(temp /= 10)
        {
            n++;
        }

        // 2.算出i的每一位的n次方之和 sum
        temp = i;
        while(temp)
        {
            sum += (int)pow(temp % 10,n);
            temp /= 10;
        }
        // 3.判断i == sum
        if(i == sum)
        {
            printf("%d ",i);
        }
    }
    return 0;
}