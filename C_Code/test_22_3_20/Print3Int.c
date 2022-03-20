#include "main.h"

/*
将三个整数数按从大到小输出。
例如：
输入：2 3 1
输出：3 2 1
*/
void Print3Int()
{
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d%d%d", &x, &y, &z);

    int max = 0;
    int mid = 0;
    int min = 0;

    if (x > y)
    {
        if (x > z)
        {
            max = x;
            if (y > z) // x>y>z
            {
                mid = y;
                min = z;
            }
            else // x>z>=y
            {
                mid = z;
                min = y;
            }
        }
        else // z>=x>y
        {
            max = z;
            mid = x;
            min = y;
        }
    }
    else // y>=x
    {
        if (y > z)
        {
            max = y;
            if (x > z) // y>=x>z
            {
                mid = x;
                min = z;
            }
            else // y>=z>=x
            {
                mid = z;
                min = x;
            }
        }
        else // z>=y>=x
        {
            max = z;
            mid = y;
            min = x;
        }
    }


    printf("%d %d %d\n", max, mid, min);
}