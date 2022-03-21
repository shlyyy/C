#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

/**
 * ��֧��ѭ��
 */
void GetMax();
void Print3Int();
void PrintMutiplesOf3();
void GetMaxValueOf10Int();

void PrimeNumber(); // ����
void LeapYear(); // ����
void FractionSum(); // �������

void GreatestCommonDivisor(); // ���Լ��

void DigitsAppearTimes(); // ����9�������г��ֵĴ���

void MultiTable(); // 9*9�˷��ھ���

void GuessNum(); // ��������Ϸ
void SearchInSortedAry(); // ���������в�������

/**
 * ����
 */
bool IsPrime(int n);
void PrintPrime();

bool IsLeapYear(int year);

void PrintMultiTable(); // �˷��ھ��� 


/**
 * �ݹ�
 */
void PrintInt(int n); // ��ӡ�����е�ÿ������

int FactorialNonRecursion(int n); // ��ײ�
int FactorialRecursion(int n); 

int Strlen(const char* str); // ���ַ�������
int StrlenRecursion(const char* str);

void ReverseString(char* str); // �ַ�����ת
void ReverseStringRecursion(char* str);


int DigitSum(int n); // ʮ�������ֵ�ÿȨλ��
int DigitSumRecursion(int n);


double MyPowRecursion(int n, int k); // n��k�η�

int Fibonacci(int n); // Fibonacci
int FibonacciRecursion(int n);

/**
 * ����
 */

void PrintArray(int ary[], int size);

void BubbleSort(int ary[], int size);


/**
 * ����
 */

void InitAry(int ary[], int size);
void PrintAry(int ary[], int size);
void ReverseAry(int ary[], int size);



