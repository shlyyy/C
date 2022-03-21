#include "main.h"

#include <stdbool.h>
#include <math.h>

/*
ʵ��һ���������ж�һ�����ǲ���������
��������ʵ�ֵĺ�����ӡ100��200֮���������
*/

bool IsPrime(int n)
{
    int i = 0;
    int j = (int)sqrt(n);
    bool is_prime = true;
    for (i = 2; i <= j; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

void PrintPrime()
{
    int i = 0;
    for (i = 101; i <= 200; i += 2)
    {
        if (IsPrime(i))
        {
            printf("%d ", i);
        }
    }
}

/*
ʵ�ֺ����ж�year�ǲ������ꡣ
*/

bool IsLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
ʵ��һ�������������������������ݡ�
*/
void Swap(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

/*
ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���
*/

void PrintMultiTable()
{
    int i = 0;
    int j = 0;

    int n = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%2d*%-2d=%3d ", i, j, i * j);
        }
        printf("\n");
    }
}


