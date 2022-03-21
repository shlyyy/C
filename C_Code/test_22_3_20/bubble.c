#include "main.h"


/*
实现一个对整形数组的冒泡排序
*/

void BubbleSort(int ary[], int size)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < size - 1; i++) // 排序n个数需要n-1趟
    {
        for (j = 0; j < size - 1 - i; j++) // n个数两个比较需要比较n-1次
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