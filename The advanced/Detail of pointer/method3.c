#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arry1[] = {1,2,3,4,5,6};
    int arry2[] = {2,3,4,5,6,7};
    int arry3[] = {3,4,5,6,7,8};
    int* parry[] = {arry1,arry2,arry3}; // parry是指针数组，是一个数组里面存放int*类型的指针
    for(i = 0;i < 3;i++)
    {
        int j;
        for(j = 0;j < 6;j++)
        {
            printf("%d ",*(parry[i]+j));
        }
        printf("\n");
    }
    system("pause");
    return 0;
}