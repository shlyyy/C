#include "main.h"

#include <stdbool.h>
#include <math.h>

/*
实现一个函数，判断一个数是不是素数。
利用上面实现的函数打印100到200之间的素数。
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
实现函数判断year是不是润年。
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
实现一个函数来交换两个整数的内容。
*/
void Swap(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

/*
实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
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


