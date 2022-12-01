#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int count = 0;
    for(year = 0;year <= 2035;year++)
    {   /*
        闰年:
        1.能被4整除，并且不能被100整除(四年一遇，百年不遇)
        2.能被400整除(四百年一遇)
        */
        /* 
        if((year % 4 == 0)&&(year % 100 != 0))
        {
            printf("%d年\t",year);
            count++;
        }
        else if(year % 400 == 0)
        {
            printf("%d年\t",year);
            count++;
        }
        */
       if(((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))
       {
        printf("%d年\t",year);
        count++;
       }

    }
    
    printf("\n从0年到2035年共用%d个闰年\n",count);
    system("pause");
    return 0;
}