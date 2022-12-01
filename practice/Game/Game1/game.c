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
        printf("玩家下棋:>");
        scanf("%d%d",&x,&y);
        if(x >= 1 && x <= row + 1 && y >= 1 && y <= col + 1)
        {
            if(board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("该坐标已经被占用,请重新输入!\n");
            }
        }
        else
        {
            printf("坐标输入有误,请重新输入!\n");
        }
    }
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    while(1)
    {
        printf("电脑下棋:>\n");printf("电脑下棋:>\n");
        x = rand() % row;
        y = rand() % col;
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
    return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    for(j = 0;j < col;j++)
    {
        if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if(1 == IsFull(board,ROW,COL))
    {
        return 'p';
    }
    return 'c';
}
