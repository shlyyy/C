#include "main.h"

#include <math.h>
#include <stdbool.h>

/*
��ӡ100~200֮�������
*/
// �Գ���
void PrimeNumber()
{
    int i = 0;
    int j = 0;
    bool is_prime = true;

    for (i = 101; i <= 200; i+=2)
    {
        is_prime = true;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            printf("%d ", i);
        }
    }
}