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
            if(j < col - 1)
                printf("|");
        }
        printf("\n");
        if(i < row - 1)
        {
            for(j = 0;j < col;j++)
            {
                printf("---");
                if(j < col - 1)
                    printf("|");
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
        printf("玩家输入:>");
        scanf("%d%d",&x,&y);
        if(x >= 1 && x <= row && y >= 1 && y<= col)
        {
            if(board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("该坐标已被占用?,请重新输入!\n");
            }
        }
        else
        {
            printf("坐标非法,请重新输入!\n");
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
        printf("电脑下:>\n");
        if(board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL],int row,int col)
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
    return 1; // 1 满
}

char IsWin(char board[ROW][COL],int row,int col)
{
    // 横
    int i;
    int j;
    int count;
    for(i = 0;i < row;i++)
    {
        int count = 1;
        for(j = 0;j < col - 1;j++)
        {
            if(board[i][j] != board[i][j + 1])
            {
                count = 1;
            }
            else
            {
                count++; // 函数内去定义count = 1；防止count未定义
                if(count == row)
                {
                    if(board[i][j] != ' ')
                        return board[i][j];
                }
            }
        }
    }

    // 竖
    for(i = 0;i < col;i++) // 列固定，行变化
    {
        int count = 1;
        for(j = 0;j < row - 1;j++)
        {
            if(board[j][i] != board[j+1][i])
            {
                count = 1;
            }
            else
            {
                count++;
                if(count == row)
                {
                    if(board[j][i] != ' ')
                        return board[j][i];
                }
            }
        }
    }

    // 正对角线
    count = 1;
    for(i = 0;i < row - 1;i++)
    {
        if(board[i][i] != board[i+1][i+1])
        {
            count = 1;
        }
        else
        {
            count++;
            if(count == row)
            {
                if(board[i][i] != ' ')
                    return board[i][i];
            }
        }
    }

    // 反对角线
    count = 1;
    for(i = row - 1;i > 0;i--)
    {
        if(board[i][i] != board[i+1][i-1])
        {
            count = 1;
        }
        else
        {
            count++;
            if(count == row)
            {
                if(board[i][i] != ' ')
                 return board[i][i];
            }
        }
    }

    if(1 == IsFull(board,ROW,COL))
    {
        return 'q';
    }
    return 'c';

}