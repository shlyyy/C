#include "main.h"

/*
����һ���������飬��ɶ�����Ĳ���
    ʵ�ֺ���init() ��ʼ������Ϊȫ0
    ʵ��print()  ��ӡ�����ÿ��Ԫ��
    ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

