#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arry[10] = {1,2,3,4,5,6,7,8,9,10};
    int (*p)[10] = &arry;
    for(i = 0;i < 10;i++)
    {
        printf("%d ",(*p)[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}