#include "game.h"

void game()
{
    char ret;
    char board[ROW][COL]; // 建立棋盘
    InitBoard(board,ROW,COL); // 初始化棋盘
    DisplayBoard(board,ROW,COL); // 展示棋盘
    while(1)
    {
        PlayerMove(board,ROW,COL); // 玩家下棋
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);// 终止条件 '*'玩家赢,'#'电脑赢,'q'平局,'c'继续游戏
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
        printf("\n恭喜你,玩家赢!\n");
    }
    if(ret == '#')
    {
        printf("\n电脑赢!\n");
    }
    if(ret == 'q')
    {
        printf("\n平局\n");
    }
}

void menu()
{
    printf("******** 1.play 0.exit ********\n");
}

void test()
{
    int input;
    srand((unsigned int)time(NULL));
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

int main()
{
    test();
    system("pause");
    return 0;
}