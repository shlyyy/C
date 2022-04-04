#include "main.h"


int i;
void func()
{
	i--;
	if (i > sizeof(i)) // int与unsigned int比较 转换为unsigned int比较
	{
		printf(">\n"); // 打印这个 sizeof返回值为无符号整数
	}
	else
	{
		printf("<\n");
	}
}


/*
求两个数二进制中不同位的个数

编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7
*/
int get_diff_count(int m, int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			++count;
		}
	}
	return count;
}
int DiffBitCount(int m, int n)
{
	int count = 0;
	int tmp = m ^ n;
	while (tmp) // 计算二进制中1的个数
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}


/*
打印整数二进制的奇数位和偶数位
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
*/

void BinaryPrint(size_t n)
{
	// size_t在32位下4字节，64位下8字节
	size_t ary[sizeof(size_t) * 8] = { 0 };
	int i = 0;
	while (i < sizeof(size_t) * 8)
	{
		ary[i] = (n >> i) & 1;
		i++;
	}

	printf("二进制序列：\n");
	for (i = sizeof(size_t) * 8 - 1; i >= 0; i--)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	printf("偶数位：\n");
	for (i = sizeof(size_t) * 8 - 1; i >= 0; i-=2)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	printf("奇数位：\n");
	for (i = sizeof(size_t) * 8 - 2; i >= 0; i -= 2)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
}

/*
统计二进制中1的个数
写一个函数返回参数二进制中 1 的个数。
比如： 15    0000 1111    4 个 1
*/
int CountOneBit(int n)
{
	int i = 0;
	int count = 0;
// 	for (i = 0; i < 32; i++)
// 	{
// 		count = count + ((n >> i) & 1);
// 	}
	while (n > 0)
	{
		n = n & (n - 1);
		count++;
	}

	return count;
}

/*
交换两个变量（不创建临时变量）
不允许创建临时变量，交换两个整数的内容
*/
// void MySwap(int* m, int* n)
// {
// 	*m = *m + *n;
// 	*n = *m - *n;
// 	*m = *m - *n;
// }
void MySwap(int* m, int* n)
{
	*m = *m ^ *n;
	*n = *m ^ *n;
	*m = *m ^ *n;
}
