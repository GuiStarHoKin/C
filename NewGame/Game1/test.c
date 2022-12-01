#include "game.h"

void menu(void)
{
    printf("*******************************\n");
    printf("******** 1.Play 0.Exit ********\n");
    printf("*******************************\n");
}

void game(void)
{
    char ret; // 存放每一次的结果 
    srand((unsigned int)time(NULL));
    char board[ROW][COL]; // 创建棋盘
    InitBoard(board,ROW,COL); // 初始化棋盘
    DisplayBoard(board,ROW,COL); // 展示棋盘
    while(1)
    {
        PlayerMove(board,ROW,COL); // 玩家下棋
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        ComputerMove(board,ROW,COL); // 电脑下棋
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
    }
    if(ret == '*')
    {
        printf("恭喜你!玩家赢\n");
    }
    else if(ret == '#')
    {
        printf("很遗憾,电脑赢!\n");
    }
    else if(ret == 'q')
    {
        printf("竟然平局了!\n");
    }


}

int main()
{
    int input;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("开始游戏!\n");
                game();
                break;
            case 0:
                printf("退出游戏!\n");
                break;
            default:
                printf("输入有误,请重新输入!\n");
                break;
        }
    }while(input);
}