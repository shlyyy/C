#include "main.h"

/*
输出9*9乘法口诀表
*/
void MultiTable()
{
    int i = 0;
    int j = 0;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%2d*%2d=%2d ", j, i, i * j);
        }
        printf("\n");
    }
}