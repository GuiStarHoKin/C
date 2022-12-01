#include "game.h"

void menu()
{
    printf("******** 1.play 0.exit ********");
}

void game()
{
    char mine[ROWS][COLS];// 建立地雷棋盘
    char show[ROWS][COLS];// 建立展示棋盘
    InitBoard(mine,ROWS,COLS,'0');// 初始化地雷棋盘
    InitBoard(show,ROWS,COLS,'*');// 初始化展示棋盘
    //DisplayBoard(mine,ROW,COL);// 展示初始化后的地雷棋盘
    DisplayBoard(show,ROW,COL);// 展示初始化后的展示棋盘
    SetMine(mine,ROW,COL); // 布置雷
    //DisplayBoard(mine,ROW,COL); // 展示地雷棋盘
    FindMine(mine,show,ROW,COL);// 扫雷


}

void test()
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("\n请输入:>");
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