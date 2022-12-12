#include <stdio.h>
#include <assert.h>
#define ROW 3
#define COL 3

int FindNum(int arr[ROW][COL],int k,int *px,int *py)
{
    assert(px != NULL);
    assert(py != NULL);
    int x;
    int y;
    x = 0;
    y = *py - 1;
    while(x <= *px-1 && y >= 0)
    {
        if(arr[x][y] > k)
        {
            y--;
        }
        else if(arr[x][y] < k)
        {
            x++;
        }
        else
        {
            *px = x;
            *py = y;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int k = 0;
    int ret = 0;
    int x = ROW;
    int y = COL;
    int arr[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("请输入你想要找的数:>");
    scanf("%d",&k);
    ret = FindNum(arr,k,&x,&y);
    if(1 == ret)
    {
        printf("找到了,下标是:[%d][%d]\n",x,y);
    }
    else
    {
        printf("没有找到\n");
    }
    return 0;
}