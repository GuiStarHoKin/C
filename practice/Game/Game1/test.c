#include "game.h"

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
        printf("恭喜你!玩家赢！\n");
    }
    if(ret == '#')
    {
        printf("电脑赢!\n");
    }
    if(ret == 'p')
    {
        printf("平局!\n");
    }


}

void menu()
{
    printf("******** 1.play 0.exit ********");
}

void test()
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("\n请选择:>");
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