#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arry[] = {1,2,3,4,5};
    short* p = (short*)arry;
    for(i = 0;i < 4;i++)
    {
        *(p+i) = 0;
    }
    for(i = 0;i < 5;i++)
    {
        printf("%d ",arry[i]);
    }
    system("pause");
    return 0;
}