#include "game.h"

void InitBoard(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j < col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i < row-1)
        {
            for(j = 0;j < col;j++)
            {
                printf("---");
                if(j < col-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    while(1)
    {
        printf("请输入坐标(行,列),例:1 1 :>");
        scanf("%d%d",&x,&y);
        if( x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("抱歉,该坐标已被占用,请重新输入!\n");
            }
        }
        else
        {
            printf("坐标输入错误,请重新输入!\n");
        }
    }
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    while(1)
    {
        x = rand() % row;
        y = rand() % col;
        if(board[x][y] == ' ')
        {
            printf("电脑输入:>%d %d\n",x+1,y+1);
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL],int row,int col) // 0未满，1满
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            if(board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    // 横
    for(i = 0;i < row;i++)
    {
        int count = 1; // 一开始是有棋的
        for(j = 0;j < col-1;j++)
        {
            if(board[i][j] != board[i][j+1]) // 比较过程中行不变，列增大
            {
                count = 1;
            }
            else
            {
                count++;
            }
            if(row <= 5) // 5子棋及以下胜利条件为自身棋数
            {
                if(count == row)
                {
                    if(board[i][j] != ' ')
                    {
                        return board[i][j];
                    }
                }
            }
            else
            {
                if(count == 5) // 5子棋以上胜利条件为5个子
                {
                    if(board[i][j] != ' ')
                    {
                        return board[i][j];
                    }
                }
            }
        }
    }

    // 竖
    for(i = 0;i < row-1;i++)
    {
        int count = 1;
        for(j = 0;j < col;j++)
        {
            if(board[i][j] != board[i+1][j]) // 比较过程中行增大，列不变
            {
                count = 1;
            }
            else
            {
                count++;
            }
            if(row <= 5)
            {
                if(count == row)
                {
                    if(board[i][j] != ' ')
                    {
                        return board[i][j];
                    }
                }
            }
            else
            {
                if(count == 5)
                {
                    if(board[i][j] != ' ')
                    {
                        return board[i][j];
                    }
                }
            }
        }
    }

    // 判断反斜杠方向,由上到下
    int count = 1;
    for(i = 0;i < row-1;i++)
    {
        if(board[i][i] != board[i+1][i+1]) // 比较过程中行列都不断增大
        {
            count = 1;
        }
        else
        {
            count++;
        }
        if(row <= 5)
        {
            if(count == row)
            {
                if(board[i][i] != ' ')
                {
                    return board[i][i];
                }
            }
        }
        else
        {
            if(count == 5)
            {
                if(board[i][i] != ' ')
                {
                    return board[i][i];
                }
            }
        }
    }

    // 判断正斜杠方向,从上到下
    j = 0;
    count = 1;
    for(i = row-1;i > 0;i--) // row-1 - 0 有row-1个元素，进行row-1次循环
    {
        if(board[j][i] != board[j+1][i-1]) // 比较过程中行增大，列减小  |0 2|   |1 1|  |2 0|
        {
            count = 1;
        }
        else
        {
            count++;
        }
        if(row <= 5)
        {
            if(count == row)
            {
                if(board[j][i] != ' ')
                {
                    return board[j][i];
                }
            }
        }
        else
        {
            if(count == 5)
            {
                if(board[j][i] != ' ')
                {
                    return board[j][i];
                }
            }
        }
        j++;
    }
    int ret = IsFull(board,ROW,COL);
    if(ret == 0)
    {
        return 'c';
    }
    else
    {
        'q';
    }
}