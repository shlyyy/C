#include "main.h"

/*
���9*9�˷��ھ���
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