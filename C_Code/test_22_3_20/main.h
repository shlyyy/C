#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

/**
 * 分支与循环
 */
void GetMax();
void Print3Int();
void PrintMutiplesOf3();
void GetMaxValueOf10Int();

void PrimeNumber(); // 质数
void LeapYear(); // 闰年
void FractionSum(); // 分数求和

void GreatestCommonDivisor(); // 最大公约数

void DigitsAppearTimes(); // 数字9在整数中出现的次数

void MultiTable(); // 9*9乘法口诀表

void GuessNum(); // 猜数字游戏
void SearchInSortedAry(); // 有序数组中查找数字

/**
 * 函数
 */
bool IsPrime(int n);
void PrintPrime();

bool IsLeapYear(int year);

void PrintMultiTable(); // 乘法口诀表 


/**
 * 递归
 */
void PrintInt(int n); // 打印整数中的每个数字

int FactorialNonRecursion(int n); // 求阶层
int FactorialRecursion(int n); 

int Strlen(const char* str); // 求字符串长度
int StrlenRecursion(const char* str);

void ReverseString(char* str); // 字符串反转
void ReverseStringRecursion(char* str);


int DigitSum(int n); // 十进制数字的每权位和
int DigitSumRecursion(int n);


double MyPowRecursion(int n, int k); // n的k次方

int Fibonacci(int n); // Fibonacci
int FibonacciRecursion(int n);

/**
 * 排序
 */

void PrintArray(int ary[], int size);

void BubbleSort(int ary[], int size);


/**
 * 数组
 */

void InitAry(int ary[], int size);
void PrintAry(int ary[], int size);
void ReverseAry(int ary[], int size);


/**
 * 操作符
 */

void func();
int DiffBitCount(int m, int n); // 两个整数的二进制中不同位的个数
void BinaryPrint(size_t n); // 打印二进制数的奇数位和偶数位

int CountOneBit(int n); // 二进制中1的个数

void MySwap(int* m, int* n); // 不创建变量交换两数


/**
 * 指针
 */
int SequenceSum(int a, int n); // 数列前n项和

void PrintDaffodils(); // 打印水仙花数

void PrintDiamond(); // 打印菱形

/**
 * 练习题
 */
int DrinkSoda(int money); // 喝汽水问题


