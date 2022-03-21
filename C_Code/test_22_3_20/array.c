#include "main.h"

/*
创建一个整形数组，完成对数组的操作
    实现函数init() 初始化数组为全0
    实现print()  打印数组的每个元素
    实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。
*/

void InitAry(int ary[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        ary[i] = 0;
    }
}

void PrintAry(int ary[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}

void ReverseAry(int ary[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int tmp = ary[left];
        ary[left] = ary[right];
        ary[right] = tmp;

        left++;
        right--;
    }
}

/*
将数组A中的内容和数组B中的内容进行交换。（数组一样大）
*/

void ExchangeAry(int ary1[], int ary2[], int size)
{
    int i = 0;
    int tmp = 0;
    for (i = 0; i < size; i++)
    {
        tmp = ary1[i];
        ary1[i] = ary2[i];
        ary2[i] = tmp;
    }
}

