#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 有bug，i+=2有bug
int main()
{
    /*
    P9 54:53
    素数:大于1的整数，能被1和他本身整除，1不是素数，除了2外偶数也不可能是素数，2是素数
    如果i = a * b，那么i就一定不是素数，a和b中一定有一个数字<=开平方i(16 = 2 * 8 = 4 * 4)，i = 1 * i 那么i就一定是素数
    试除法:
    2->i - 1
    */
   int i;
   int j;
   int count = 0;
   for(i = 2;i <= 1000;i++)//1-1000之间的素数，1不是素数，偶数也不可能是素数([101-200]可以i+=2,[2-1000]不行，[2-1000]只能i++?)。。。。101+2+2全部为奇数肯定可以，2+2+2全部为偶数肯定不行。。。
   {
        /*
        for(j = 2;j <= i-1;j++)
        {
            if(i % j == 0)//不是素数
            {
                break;
            }
        }
        if(j == i)
        {
            count++;
            printf("%d\t",i);
        }
        */
       for(j = 2;j <= sqrt(i);j++)
       {
            if(i % j == 0)
            {
                break;// 有一个数是小于等于开平方i的，并且这个数可以整除i的，那这个i就不是素数
            }
       }
       if(j > sqrt(i))// break或者不break都要到这里
        {
            count++;
            printf("%d\t",i);
        }

    }
   printf("\n总共有%d个素数\n",count);
   system("pause");
   return 0;
}

