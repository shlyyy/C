#include "main.h"


/*
���������������������������Լ��
���磺
���룺20 40
�����20
*/

// շת�����
void GreatestCommonDivisor()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d", &a, &b);

    while (c = a % b) // c�������� c��Ϊ0��һֱѭ��
    {
        a = b;
        b = c; 
    }
    
    // ֱ�� a%b==0 c=0 ����whileѭ�� bΪ���Լ��
    printf("%d\n", b);
}

// �������
void GreatestCommonDivisor1()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d", &a, &b);

    c = a > b ? b : a; // ��С��
    
    int i = 0;
    // �ӽ�С����1�����ж� a��bͬʱ�����Ž���ѭ��
    for (i = c; i >= 1; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
    }
    printf("%d\n", i);
}