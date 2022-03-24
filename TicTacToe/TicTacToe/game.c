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
		printf("��ѡ��>:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			StartGame();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("ѡ��������������룡\n");
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

    // ��ʼ����������Ϊ�ո�
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
		printf("���Ӯ!\n");
		break;
	case COMPUTER_WIN:
		printf("AIӮ!\n");
		break;
	case DRAW:
		printf("ƽ��!\n");
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
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ�����ӵ�����:>");
		scanf("%d%d", &x, &y); // x[1,row] y[1,col]
	
		// �����������ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == NULL_SYMBOL)
			{
				board[x - 1][y - 1] = PLAYER_SYMBOL;
				break;
			}
			else
			{
				printf("��������걻ռ�ã���������!\n");
			}
		}
		else
		{
			printf("�������겻�Ϸ�����������!\n");
		}	
	} // end while(1)
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("AI��:>\n");
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


// ���Ӯ AIӮ ƽ�� ����
WIN IsWin(char board[ROW][COL], int row, int col)
{
	WIN ret = DRAW;
	
	char tmp = 0;
	bool IsRowSame = false;
	bool IsColSame = false;
	bool IsDiagonalSame = false; // �Խ���

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		IsRowSame = true;
		tmp = board[i][0];

		// ������Ƿ���ͬ
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
			// ������Ƿ���ͬ
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
		// ���Խ����Ƿ�����ͬ
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
		// �Ƿ��ǻ����Լ�������ƽ����
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