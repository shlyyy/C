#include "main.h"


/*
递归方式实现打印一个整数的每一位
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
递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
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

/*递归和非递归分别实现strlen*/
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
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
比如:
char arr[] = "abcdef";
逆序之后数组的内容变成：fedcba
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
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
输入：1729，输出：19
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
编写一个函数实现n的k次方，使用递归实现。
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
递归和非递归分别实现求第n个斐波那契数

例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1
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