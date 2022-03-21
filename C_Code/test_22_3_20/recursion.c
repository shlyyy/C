#include "main.h"


/*
�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
*/
void PrintInt(int n)
{
    if (n > 9)
    {
        PrintInt(n / 10);
    }
    printf("%d ", n % 10);
}

/*
�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
*/
int FactorialNonRecursion(int n)
{
    int ret = 1;
    while (n > 1)
    {
        ret *= n;
        n--;
    }
    return ret;
}

int FactorialRecursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * FactorialRecursion(n - 1);
    }
}

/*�ݹ�ͷǵݹ�ֱ�ʵ��strlen*/
int Strlen(const char* str)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

int StrlenRecursion(const char* str)
{
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + StrlenRecursion(str + 1);
    }
}

/*
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
����:
char arr[] = "abcdef";
����֮����������ݱ�ɣ�fedcba
*/

void ReverseString(char* str)
{
    int left = 0;
    int right = Strlen(str) - 1;

    while (left < right)
    {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;

        left++;
        right--;
    }
}

void ReverseStringRecursion(char* str)
{
    char tmp = str[0];
    int len = Strlen(str);
    str[0] = str[len - 1];
    str[len - 1] = '\0';

    if (Strlen(str + 1) > 1)
    {
        ReverseStringRecursion(str + 1);
    }

    str[len - 1] = tmp;
}


/*
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19
*/

int DigitSumRecursion(int n)
{
    if (n > 9)
    {
        return DigitSum(n / 10) + n % 10;
    }
    else
    {
        return n;
    }
}

int DigitSum(int n)
{
    int sum = 0;

    while (n % 10)
    {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

/*
��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
*/

double MyPowRecursion(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    else if (k > 0)
    {
        return n * MyPowRecursion(n, k - 1);
    }
    else
    {
        return 1.0 / MyPowRecursion(n, -k);
    }
}


/*
�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1
*/

int Fibonacci(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;

    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;

        n--;
    }
   
    return c;
}

int FibonacciRecursion(int n)
{
    if (n > 2)
    {
        return FibonacciRecursion(n - 1) + FibonacciRecursion(n - 2);
    }

    return 1;
}