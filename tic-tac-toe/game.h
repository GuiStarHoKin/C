#pragma once
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
#include <stdio.h>
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
#include <stdlib.h>
#include <time.h>
//玩家赢了-'*'
//玩家赢了-'#'
//游戏继续-'C'
//平局-'Q'
char Iswin(char board[ROW][COL], int row, int col);