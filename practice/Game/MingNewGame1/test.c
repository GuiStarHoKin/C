#define _CRT_SECURE_NO_WARNINGS 1

//test.c

#include "game.h"
void menu(void)
{
	printf("************************\n");
	printf("*******  三子棋  *******\n");
	printf("*******----------*******\n");
	printf("************************\n");
	printf("************************\n");
	printf("******* 游戏菜单 *******\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
	
}
void game(void)
{
	printf("开始游戏：>\n");
	char board[ROW][COL] = { 0 };
	char ret = 0;
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret= is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Sleep(2000);
		system("cls");
		print_board(board, ROW, COL);

		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Sleep(2000);
		system("cls");
		print_board(board, ROW, COL);


	}
	if (ret == '*')
	{
		printf("玩家赢\n\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n\n");
	}
	else if (ret == 'q')
	{
		printf("双方平局\n\n");
	}
}
void test(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		printf("请选择:>\n");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("选择错误，请重新选择:>\n");
			break;
		}
		}

	} while (input);
}
int main()
{
	test();
	return 0;

}