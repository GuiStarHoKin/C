#include "game.h"

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i;
    int j;
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    int i;
    int j;
    for(i = 0;i <= col;i++) // 展示列号
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i = 1;i <= row;i++)
    {
        printf("%d ",i); // 展示行号
        for(j = 1;j <= col;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
    int count;
    count = EASY_COUNT;
    while(count)
    {
        int x; // 定位x坐标
        int y; // 定位y坐标
        x = rand() % row + 1;
        y = rand() % col + 1;
        if(board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}

int GetMineCount(char board[ROWS][COLS],int x,int y)
{
    return 
    board[x-1][y-1]+
    board[x-1][y]+
    board[x-1][y+1]+
    board[x][y-1]+
    board[x][y+1]+
    board[x+1][y-1]+
    board[x+1][y]+
    board[x+1][y+1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x;
    int y;// 给坐标
    // 9*9-10 = 71
    int win = 0;// 胜利
    while(win < row * col - EASY_COUNT)
    {
        printf("请输入排雷的坐标:>");
        scanf("%d%d",&x,&y);
        if(x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(mine[x][y] == '1') // 踩雷
            {
                printf("呵呵\n");
                printf("很遗憾,你被炸死了!\n");
                DisplayBoard(mine,row,col);
                break;
            }
            else // 不是雷
            {
                // 计算x,y坐标周围有多少个雷
                int count = GetMineCount(mine,x,y);
                show[x][y] = count + '0';
                DisplayBoard(show,row,col);
                win++;
            }
        }
        else
        {
            printf("请输入正确的坐标!\n");
        }
    }
    if(win == row * col - EASY_COUNT)
    {
        printf("恭喜你,扫雷成功了!\n");
        DisplayBoard(mine,row,col);

    }
}