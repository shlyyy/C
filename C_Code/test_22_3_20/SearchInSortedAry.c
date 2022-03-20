#include "main.h"

// ������
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

// ���ַ�
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
��д������һ���������������в��Ҿ����ĳ����
Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
        printf("�Ҳ���\n");
    }
}



