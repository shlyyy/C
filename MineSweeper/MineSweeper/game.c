#include "game.h"

#include <stdlib.h> // srand
#include <time.h> // time
#include <stdbool.h> // bool

void MineSweeperGameStart()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		Menu();
		printf("请输入你的选择:>");

		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏退出!\n");
			break;
		case 1:
			StartGame();
			break;
		default:
			printf("输入非法，请重新输入!\n");
			break;
		}

	} while (input);
}

void Menu()
{
	printf("*****************************\n");
	printf("*******    1. Play    *******\n");
	printf("*******    0. Exit    *******\n");
	printf("*****************************\n");
}

void StartGame()
{
	char mine_array[ROWS][COLS] = { 0 }; // 存放雷的数组
	char show_array[ROWS][COLS] = { 0 }; // 显示界面的数组

	// 初始化数组
	InitArray(mine_array, ROWS, COLS, INIT_MINE_SYMBOL);
	InitArray(show_array, ROWS, COLS, INIT_SHOW_SYMBOL);

	DisplayArray(show_array, ROW, COL);

	// 设置雷
	SetMine(mine_array, ROW, COL);

	// 测试打开
	//DisplayArray(mine_array, ROW, COL);

	FineMine(mine_array, show_array, ROW, COL);
}

void InitArray(char ary[ROWS][COLS], int rows, int cols, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			ary[i][j] = ch;
		}
	}
}

void DisplayArray(char ary[ROWS][COLS], int row, int col)
{
	// 打印坐标索引
	int j = 0;
	int i = 0;
	printf("#####################\n");
	for (i = 0; i <= col; i++)
	{
		if (i == 0)
		{
			printf("%d|", i);
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		if (i == 0)
		{
			printf("-|");
		}
		else
		{
			printf("--");
		}
	}
	printf("\n");

	// 打印棋盘数据
	for (i = 1; i <= row; i++)
	{
		printf("%d|", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", ary[i][j]);
		}
		printf("\n");
	}
	printf("#####################\n");
}

void SetMine(char mine_array[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = MINE_COUNT;
	while (count > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;

		if (mine_array[x][y] == INIT_MINE_SYMBOL)
		{
			mine_array[x][y] = MINE_SYMBOL;
			count--;
		}
	}
}

static bool IsAllMinesCleared(char show_array[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show_array[i][j] != INIT_SHOW_SYMBOL)
			{
				count++;
				if (count == ROW * COL - MINE_COUNT)
				{
					return true;
				}
			}
		}
	}
	return false;
}


// 游戏结束：
// 1.遇到雷
// 2.所有非雷都已找出
void FineMine(char mine_array[ROWS][COLS], char show_array[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);

		// 判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine_array[x][y] == MINE_SYMBOL)
			{
				printf("游戏结束，被雷炸死!\n");
				DisplayArray(mine_array, ROW, COL);
				break;
			}
			else
			{
				// 没踩到雷 递归展开
				RecursionExpansion(mine_array, show_array, row, col, x, y);
				DisplayArray(show_array, row, col);
				
				if (IsAllMinesCleared(show_array, row, col))
				{
					printf("恭喜你已排所有的雷!\n");
					DisplayArray(mine_array, row, col);
				}
			}
		}
		else
		{
			printf("输入坐标无效，重新输入!\n");
		}
	}
}

int GetMineCount(char mine_array[ROWS][COLS], int x, int y)
{
	return mine_array[x - 1][y + 1] + mine_array[x - 1][y] + mine_array[x - 1][y - 1] +
		mine_array[x][y + 1] + mine_array[x][y - 1] +
		mine_array[x + 1][y + 1] + mine_array[x + 1][y] + mine_array[x + 1][y - 1] - 8 * INIT_MINE_SYMBOL;
}

// 当show_array周围8个位置都没有雷时进行递归展开
void RecursionExpansion(char mine_array[ROWS][COLS], char show_array[ROWS][COLS], int row, int col, int x, int y)
{
	int local_mine_count = GetMineCount(mine_array, x, y);
	show_array[x][y] = local_mine_count + '0';
	if (local_mine_count == 0)
	{
		int i = 0;
		int j = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (i >= 1 && i <= row && j >= 1 && j <= col) // 坐标不越界
				{
					if (show_array[i][j] == INIT_SHOW_SYMBOL) // 跳过已经递归展开过的 避免循环递归
					{
						RecursionExpansion(mine_array, show_array, row, col, i, j);
					}
				}
			}
		}
	}
}
