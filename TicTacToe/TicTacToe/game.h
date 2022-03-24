
#ifndef _GAME_H
#define _GAME_H
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define ROW 3
#define COL 3

#define NULL_SYMBOL ' '
#define PLAYER_SYMBOL '*'
#define COMPUTER_SYMBOL '#'

typedef enum _WIN
{
	PLAYER_WIN = 0,
	COMPUTER_WIN,
	DRAW,
	CONTINUE
}WIN;

void TicTacToeGameStart();

void Menu();
void StartGame();

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);



void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

WIN IsWin(char board[ROW][COL], int row, int col);



#endif // !_GAME_H
