#include "main.h"


/*
��ӡ1-100֮������3�ı���������
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
