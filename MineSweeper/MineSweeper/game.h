#ifndef _GAME_H
#define _GAME_H
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
1.��Ϸ���Ѷȵȼ�
2.��Ǻ�ȡ�����
3.�Զ���չ �㿪һ��չ��һƬ
*/

#define ROW (9)
#define COL (9)

#define ROWS ((ROW)+2)
#define COLS ((COL)+2)

#define INIT_MINE_SYMBOL ('0')
#define MINE_SYMBOL ('1')
#define INIT_SHOW_SYMBOL ('*')

#define MINE_COUNT (30)



void MineSweeperGameStart();
void Menu();

void StartGame();

void InitArray(char ary[ROWS][COLS], int rows, int cols, char ch);

void DisplayArray(char ary[ROWS][COLS], int row, int col);

void SetMine(char mine_array[ROWS][COLS], int row, int col);

void FineMine(char mine_array[ROWS][COLS], char show_array[ROWS][COLS], int row, int col);

int GetMineCount(char mine_array[ROWS][COLS], int x, int y);

void RecursionExpansion(char mine_array[ROWS][COLS], char show_array[ROWS][COLS], int row, int col, int x, int y);


#endif // !_GAME_H
