#include "main.h"


/*
打印1-100之间所有3的倍数的数字
*/

void PrintMutiplesOf3()
{
    int i = 1;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
}
