#include "main.h"


/*
��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
*/
void DigitsAppearTimes()
{
    int i = 0;
    int count = 0;
    for (i = 1; i <= 100; i++)
    {
        if ((i / 10) == 9)
        {
            count++;
        }
        if ((i % 10) == 9)
        {
            count++;
        }
    }
    printf("%d\n", count);
}