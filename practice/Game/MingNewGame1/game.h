#pragma once

//game.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 10
#define COL 10
void init_board(char board[ROW][COL], int row, int col);

void print_board(char board[ROW][COL],int row,int col);

void player_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);

void computer_move(char board[ROW][COL], int row, int col);

