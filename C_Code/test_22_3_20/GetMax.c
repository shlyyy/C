#include "main.h"

int Max(int x, int y)
{
    return x > y ? x : y;
}

void GetMax()
{
    int x = 0;
    int y = 0;
    scanf("%d%d", &x, &y);
    printf("%d\n", Max(x, y));

}


//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i = 5) // ËÀÑ­»·µÄ´òÓ¡5
//            printf("%d ", i);
//    }
//    return 0;
//}