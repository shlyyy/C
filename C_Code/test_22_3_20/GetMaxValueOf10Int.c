#include "main.h"

/*
求10个整数中最大值
*/

void GetMaxValueOf10Int()
{
    int ary[] = { 1, 4, 7, 32, 65,
                  3, 12, 76, 8, 23 };

    int i = 0;
    int max = ary[i];

    for (i = 1; i < 10; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    printf("%d\n", max);
}