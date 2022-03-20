#include "main.h"


/*
给定两个数，求这两个数的最大公约数
例如：
输入：20 40
输出：20
*/

// 辗转相除法
void GreatestCommonDivisor()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d", &a, &b);

    while (c = a % b) // c保存余数 c不为0就一直循环
    {
        a = b;
        b = c; 
    }
    
    // 直到 a%b==0 c=0 结束while循环 b为最大公约数
    printf("%d\n", b);
}

// 暴力求解
void GreatestCommonDivisor1()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d", &a, &b);

    c = a > b ? b : a; // 较小数
    
    int i = 0;
    // 从较小数到1进行判断 a、b同时整除才结束循环
    for (i = c; i >= 1; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
    }
    printf("%d\n", i);
}