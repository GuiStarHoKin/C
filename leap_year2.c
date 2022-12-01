#include <stdio.h>
#include <stdlib.h>

int get_leap_year(int year)
{   
    if((year % 4 == 0&&year % 100 != 0)||(year % 400 == 0))
    {   
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // 0-2035年
    int i;
    int count = 0;
    for(i = 0;i <= 2035;i++)
    {   
        if(1 == get_leap_year(i))
        {
            count++;
            printf("%d年\t",i);
        }
    }
    printf("\n从0到2035年总共有:%d个闰年\n",count);
    system("pause");
    return 0;
}