#include "main.h"


int i;
void func()
{
	i--;
	if (i > sizeof(i)) // int��unsigned int�Ƚ� ת��Ϊunsigned int�Ƚ�
	{
		printf(">\n"); // ��ӡ��� sizeof����ֵΪ�޷�������
	}
	else
	{
		printf("<\n");
	}
}


/*
���������������в�ͬλ�ĸ���

���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:
1999 2299
�������:7
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
	while (tmp) // �����������1�ĸ���
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}


/*
��ӡ���������Ƶ�����λ��ż��λ
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
*/

void BinaryPrint(size_t n)
{
	// size_t��32λ��4�ֽڣ�64λ��8�ֽ�
	size_t ary[sizeof(size_t) * 8] = { 0 };
	int i = 0;
	while (i < sizeof(size_t) * 8)
	{
		ary[i] = (n >> i) & 1;
		i++;
	}

	printf("���������У�\n");
	for (i = sizeof(size_t) * 8 - 1; i >= 0; i--)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	printf("ż��λ��\n");
	for (i = sizeof(size_t) * 8 - 1; i >= 0; i-=2)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	printf("����λ��\n");
	for (i = sizeof(size_t) * 8 - 2; i >= 0; i -= 2)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
}

/*
ͳ�ƶ�������1�ĸ���
дһ���������ز����������� 1 �ĸ�����
���磺 15    0000 1111    4 �� 1
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
����������������������ʱ������
����������ʱ������������������������
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
