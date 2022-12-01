#include <stdio.h>
#include <stdlib.h>

void print1(int arry[3][5],int x,int y)
{
    int i;
    int j;
    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            printf("%d ",arry[i][j]);
        }
        printf("\n");
    }
}

void print2(int (*p)[5],int x,int y) // nb
{
    int i;
    int j;
    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            printf("%d ",(*(p+i))[j]);
            //printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int arry[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print1(arry,3,5);
    printf("\n");
    print2(arry,3,5); // 数组名为数组首元素的地址
    system("pause");
    return 0;
}