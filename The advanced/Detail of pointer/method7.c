#include <stdio.h>
#include <stdlib.h>
// arry[i] == p[i] == *(p+i) == *(arry+i)
int main()
{
    int i;
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    int* p = arry;
    for(i = 0;i < 10;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
    for(i = 0;i < 10;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    for(i = 0;i < 10;i++)
    {
        printf("%d ",*(arry+i));
    }
    printf("\n");
    for(i = 0;i < 10;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}