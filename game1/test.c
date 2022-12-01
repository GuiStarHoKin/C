#include "game.h"

void menu()
{
    printf("******** 1.play 0.exit ********");
}

void game()
{
    char ret;
    char board[ROW][COL];          // 创建棋盘
    InitBoard(board, ROW, COL);    // 初始化棋盘
    DisplayBoard(board, ROW, COL); // 展示棋盘
    while (1)
    {
        PlayerMove(board, ROW, COL);   // 玩家下棋
        DisplayBoard(board, ROW, COL); // 展示玩家下完后的棋局
        ret = IsWin(board,ROW,COL); // 判断当前棋局状态 '*'玩家赢，‘#’电脑赢，‘q’平局，‘c’继续
        if(ret != 'c')
        {
            break;
        }
        ComputerMove(board,ROW,COL); // 电脑下棋
        DisplayBoard(board,ROW,COL); // 展示电脑下完后的棋具
        ret = IsWin(board,ROW,COL); // 判断当前棋局状态
        if(ret != 'c')
        {
            break;
        }
    }
    if(ret == '*')
    {
        printf("玩家赢!\n");
    }
    else if(ret == '#')
    {
        printf("电脑赢!\n");
    }
    else if(ret == 'q')
    {
        printf("平局!\n");
    }
}

void test()
{
    srand((unsigned int)time(NULL));
    int input;
    do
    {
        menu();
        printf("\n请输入:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("游戏退出!\n");
            break;
        default:
            printf("输入有误，请重新输入\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    system("pause");
    return 0;
}