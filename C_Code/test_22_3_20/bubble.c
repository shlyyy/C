#include "main.h"


/*
ʵ��һ�������������ð������
*/

void BubbleSort(int ary[], int size)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < size - 1; i++) // ����n������Ҫn-1��
    {
        for (j = 0; j < size - 1 - i; j++) // n���������Ƚ���Ҫ�Ƚ�n-1��
        {
            if (ary[j] > ary[j + 1])
            {
                int tmp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = tmp;
            }
        }
    }
}

void PrintArray(int ary[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}