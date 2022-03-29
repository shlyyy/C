#include "main.h"


/*
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
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
打印水仙花数

求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
*/
#include <math.h> // pow
void PrintDaffodils()
{
	int power = 0; // 指数
	int temp = 0;
	int sum = 0;
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		// 计算指数
		power = 0;
		temp = i;
		while (temp)
		{
			temp /= 10;
			power++;
		}

		// 求和
		sum = 0;
		temp = i;
		while (temp)
		{
			sum = sum + (int)pow((temp % 10), power);
			temp /= 10;
		}

		// 判断结果
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}


/*
打印菱形
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
	int n = 6; // 菱形的大小
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
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
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