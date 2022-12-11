// 杨氏矩阵
// 矩阵的每行从左到右递增，矩阵从上到下递增
// 请编写程序在这样的矩阵中查找某个数字是否存在
// 要求：时间复杂度小于O(N)

// 1 2 3
// 4 5 6
// 7 8 9

// 1 2 3
// 3 4 5
// 4 5 6

// 方法->余子项(注意矩阵的右上角的位置/左下角的位置(一行当中最大值，一列当中最小值/一行当中最小值，一列当中最大值))
#include <stdio.h>

#define ROW 3
#define COL 3

int FindNum(int arr[ROW][COL],int row,int col,int k)
{
    int x; // 代表行
    int y; // 代表列
    x = 0;
    y = col - 1;
    while(x <= row-1 && y >= 0)
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
            return 1;
        }
    }
    return 0;

}

int main()
{
    int k = 0;
    int ret = 0;
    int arr[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("请输入要寻找的数字:>");
    scanf("%d",&k);
    ret = FindNum(arr,ROW,COL,k);
    if(ret == 1)
    {
        printf("找到了\n");
    }
    else
    {
        printf("没找到\n");
    }
    return 0;

}