#include "main.h"

/*
计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
*/

void FractionSum()
{
    double sum = 0.0;
    double tmp = 0.0;

    int i = 0;
    int j = 0;

    for (i = 1, j = 1; i <= 100; i++, j *= (-1))
    {
        tmp = (1.0 / i) * j;
        sum += tmp;
    }


    printf("%lf\n", sum);
}