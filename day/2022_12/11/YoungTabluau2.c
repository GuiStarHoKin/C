#include <stdio.h>
#include <assert.h>
#define ROW 3
#define COL 3

int FindNum(int arr[ROW][COL],int *px,int *py,int k)
{
    assert(px != NULL);
    assert(py != NULL);
    int x = 0; // 行
    int y = *py - 1; // 列
    while(x <= *px-1 && y >= 0)
    {
        if(arr[x][y] > k)
        {
            y--; // 往左一列
        }
        else if(arr[x][y] < k)
        {
            x++; // 往下一行
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
    printf("请输入想要查询的元素:>");
    scanf("%d",&k);
    
    // 返回型参数
    ret = FindNum(arr,&x,&y,k);
    if(1 == ret)
    {
        printf("找到了,下标为:[%d][%d]\n",x,y);
    }
    else
    {
        printf("找不到");
    }
    return 0;
}