#include "main.h"


/*
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
*/
int SequenceSum(int a, int n)
{
	int sum = 0;
	int tmp = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	return sum;
}


/*
��ӡˮ�ɻ���

���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
*/
#include <math.h> // pow
void PrintDaffodils()
{
	int power = 0; // ָ��
	int temp = 0;
	int sum = 0;
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		// ����ָ��
		power = 0;
		temp = i;
		while (temp)
		{
			temp /= 10;
			power++;
		}

		// ���
		sum = 0;
		temp = i;
		while (temp)
		{
			sum = sum + (int)pow((temp % 10), power);
			temp /= 10;
		}

		// �жϽ��
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}


/*
��ӡ����
12 	    *(6,12)
11 	   ***
10 	  *****
9    *******
8   *********
7  ***********
6 *************(12,6)
5  ***********
4   *********
3    *******
2  	  *****
1 	   ***
0 	    *(6,0)
(0,6) (6,12)  y=x+6
(0,6) (6,0)   y=-x+6
(12,6)(6,12)  y=-x+18
(12,6)(6,0)   y=x-6

*/
void PrintDiamond()
{
	int n = 6; // ���εĴ�С
	int x = 0;
	int y = 0;
	for (x = 0; x < 2 * n + 1; x++)
	{
		for (y = 0; y < 2 * n + 1; y++)
		{
			if ((x - y + n >= 0) && (x + y - n >= 0) && (x - y - n <= 0) && (x + y - 3 * n <= 0))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
void PrintDiamond2()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}