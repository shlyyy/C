#include "main.h"

// 暴力法
int Search1(int ary[], int size, int target)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (ary[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// 二分法
int BinarySearch(int ary[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int mid = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (target > ary[mid])
        {
            left = mid + 1;
        }
        else if (target < ary[mid])
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}


/*
编写代码在一个整形有序数组中查找具体的某个数
要求：找到了就打印数字所在的下标，找不到则输出：找不到。
*/

void SearchInSortedAry()
{
    int ary[] = { 1, 3, 4, 5, 7,
                  8, 10, 12, 22, 25 };
    int target = 12;

    //int index = Search1(ary, sizeof(ary)/sizeof(ary[0]), target);
    int index = BinarySearch(ary, sizeof(ary)/sizeof(ary[0]), target);
    if (index != -1)
    {
        printf("target:%d index:%d\n", target, index);
    }
    else
    {
        printf("找不到\n");
    }
}



