#include "main.h"

//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(int argc, char* argv[])
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    adjust_arr(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    

	return 0;
}



int main2(int argc, char* argv[])
{
    /*
    * 库函数
    */
    char arr[20] = { 0 };
    printf("%s\n", my_strcpy(arr, "hello"));
    
	return 0;
}



int main1(int argc, char* argv[])
{
    /**
     * 指针
     */
	printf("%d\n", SequenceSum(2, 5));

    PrintDaffodils();

    PrintDiamond();

    printf("%d\n", DrinkSoda(20));
	return 0;
}


// int main0(int argc, char* argv[])
// {
// 
//     /**
//      * 分支与循环
//      */
//      //GetMax();
//      //Print3Int();
//      //PrintMutiplesOf3();
//      //GetMaxValueOf10Int();
// 
//      //PrimeNumber();
//      //LeapYear();
// 
//      //FractionSum();
// 
//      //GreatestCommonDivisor();
// 
//      //MultiTable();
// 
//      //GuessNum();
//      //SearchInSortedAry();
// 
//      /**
//       *函数
//       */
//     //PrintPrime();
//     printf("2020:%d 2022:%d\n", IsLeapYear(2020), IsLeapYear(2022));
// 
//     PrintMultiTable();
// 
//     /**
//     * 递归
//     */
//     PrintInt(1234);
//     printf("NonRecursion:5!=%d Recursion:5!=%d\n", FactorialNonRecursion(5), FactorialRecursion(5));
// 
//     printf("Strlen(\"abcd\")=%d StrlenRecursion(\"abcd\")=%d\n",
//         Strlen("abcd"), StrlenRecursion("abcd"));
// 
//     char str[] = "hello";
//     //ReverseString(str);
//     ReverseStringRecursion(str);
//     printf("%s\n", str);
// 
//     printf("%d %d\n", DigitSum(1234), DigitSumRecursion(1234));
// 
//     printf("%lf %lf\n", MyPowRecursion(2, 3), MyPowRecursion(2, -3));
// 
// 
//     printf("Fib(5):%d FibRecursion(5):%d\n", Fibonacci(5), FibonacciRecursion(5));
//     printf("Fib(10):%d FibRecursion(10):%d\n", Fibonacci(10), FibonacciRecursion(10));
//     printf("Fib(2):%d FibRecursion(2):%d\n", Fibonacci(2), FibonacciRecursion(2));
// 
// 
//     /**
//     * 数组
//     */
//     int ary[] = { 12,3,4,5,645,765,34,65,65 };
//     PrintArray(ary, sizeof(ary) / sizeof(ary[0]));
//     BubbleSort(ary, sizeof(ary) / sizeof(ary[0]));
//     PrintArray(ary, sizeof(ary) / sizeof(ary[0]));
// 
//     int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
//     PrintAry(ary, sizeof(ary) / sizeof(ary[0]));
//     ReverseAry(ary, sizeof(ary) / sizeof(ary[0]));
//     PrintAry(ary, sizeof(ary) / sizeof(ary[0]));
// 
// 
//     /**
//     * 操作符
//     */
//     func();
// 
//     int m = 0;
//     int n = 0;
//     scanf("%d%d", &m, &n);
//     printf("%d\n", DiffBitCount(m, n));
// 
//     BinaryPrint(5);
// 
//     printf("%d\n", CountOneBit(15));
// 
// 
//     int m = 5;
//     int n = 3;
//     MySwap(&m, &n);
//     printf("m:%d n:%d\n", m, n);
//     return 0;
// }