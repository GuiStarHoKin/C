#include "game.h"

void menu()
{
    printf("******** 1.Play 0.Exit ********\n");
    printf("请选择:>"); 
}

void game()
{
    char ret;
    char board[ROW][COL];
    InitBoard(board,ROW,COL);
    DisplayBoard(board,ROW,COL);
    while(1)
    {
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        Sleep(1000); 
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);
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
        printf("电脑赢！\n");
    }
    else
    {
        printf("平局!\n");
    }

}

void test()
{
    int input;
    do
    {
        srand((unsigned int)time(NULL));
        menu();
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
    return 0;
}