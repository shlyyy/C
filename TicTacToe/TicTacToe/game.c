#include "game.h"

#include <stdlib.h> // srand
#include <time.h> // time
#include <stdbool.h> // bool

void TicTacToeGameStart()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		Menu();
		printf("请选择>:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			StartGame();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}

	} while (input);

}


void Menu()
{
    printf("*******************************\n");
    printf("**********  1.play  ***********\n");
    printf("**********  0.exit  ***********\n");
    printf("*******************************\n");
}

void StartGame()
{
    char board[ROW][COL] = { 0 };
	WIN ret = PLAYER_WIN;

    // 初始化棋盘数据为空格
    InitBoard(board, ROW, COL);

	DisplayBoard(board, ROW, COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != CONTINUE)
		{
			break;
		}

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != CONTINUE)
		{
			break;
		}
	}

	switch (ret)
	{
	case PLAYER_WIN:
		printf("玩家赢!\n");
		break;
	case COMPUTER_WIN:
		printf("AI赢!\n");
		break;
	case DRAW:
		printf("平局!\n");
		break;
	}
	
}


void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = NULL_SYMBOL;
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下棋子的坐标:>");
		scanf("%d%d", &x, &y); // x[1,row] y[1,col]
	
		// 检查输入坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == NULL_SYMBOL)
			{
				board[x - 1][y - 1] = PLAYER_SYMBOL;
				break;
			}
			else
			{
				printf("输入的坐标被占用，重新输入!\n");
			}
		}
		else
		{
			printf("输入坐标不合法，重新输入!\n");
		}	
	} // end while(1)
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("AI走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == NULL_SYMBOL)
		{
			board[x][y] = COMPUTER_SYMBOL;
			break;
		}
	}
}

static bool IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == NULL_SYMBOL)
			{
				return false;
			}
		}
	}
	return true;
}


// 玩家赢 AI赢 平局 继续
WIN IsWin(char board[ROW][COL], int row, int col)
{
	WIN ret = DRAW;
	
	char tmp = 0;
	bool IsRowSame = false;
	bool IsColSame = false;
	bool IsDiagonalSame = false; // 对角线

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		IsRowSame = true;
		tmp = board[i][0];

		// 检查行是否相同
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != tmp || board[i][j] == NULL_SYMBOL)
			{
				IsRowSame = false;
				break;
			}
		}
		
		if (!IsRowSame)
		{
			tmp = board[0][i];
			IsColSame = true;
			// 检查列是否相同
			for (j = 0; j < col; j++)
			{
				if (board[j][i] != tmp || board[i][j] == NULL_SYMBOL)
				{
					IsColSame = false;
					break;
				}
			}
		}
		
		if (IsColSame || IsRowSame)
		{
			break;
		}
	}

	if (!IsRowSame && !IsColSame)
	{
		// 检查对角线是否有相同
		tmp = board[0][0];
		IsDiagonalSame = true;
		for (i = 0; i < row; i++)
		{
			if (board[i][i] != tmp || board[i][i] == NULL_SYMBOL)
			{
				IsDiagonalSame = false;
				break;
			}
		}

		if (!IsDiagonalSame)
		{
			tmp = board[0][col - 1];
			IsDiagonalSame = true;
			for (i = 0, j = col - 1; i < row; i++, j--)
			{
				if (board[i][j] != tmp || board[i][j] == NULL_SYMBOL)
				{
					IsDiagonalSame = false;
					break;
				}
			}
		}
		
	}

	if (IsColSame || IsRowSame || IsDiagonalSame)
	{
		if (tmp == PLAYER_SYMBOL)
		{
			ret = PLAYER_WIN;
		}
		else if (tmp == COMPUTER_SYMBOL)
		{
			ret = COMPUTER_WIN;
		}
	}

	if (!IsRowSame && !IsColSame && !IsDiagonalSame)
	{
		// 是否是还可以继续或者平局了
		if (IsFull(board, row, col))
		{
			ret = DRAW;
		}
		else
		{
			ret = CONTINUE;
		}
	}
	return ret;
}