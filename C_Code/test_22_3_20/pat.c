#include "main.h"


/*
喝汽水问题
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
*/
int DrinkSoda(int money)
{
	int soda = money;
	
	int empty_bottle = soda;
	int sum_soda = soda;

	while (empty_bottle > 1)
	{
		soda = empty_bottle / 2; // 两个空瓶换一瓶汽水
		sum_soda = sum_soda + soda;
		empty_bottle = soda + empty_bottle % 2; // 空瓶
	}

	// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money * 2 - 1
	// return money * 2 - 1;
	return sum_soda;
}

/*
调整奇数偶数顺序
调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
void adjust_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		if (arr[left] % 2 == 0)
		{
			while (left < right)
			{
				if (arr[right] % 2 == 1)
				{
					int tmp = arr[left];
					arr[left] = arr[right];
					arr[right] = tmp;
					break;
				}
				else
				{
					right--;
				}

			}
		}
		else
		{
			left++;
		}
	}
}
/*
思路：
1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
2. 循环进行一下操作
 a. 如果left和right表示的区间[left, right]有效，进行b，否则结束循环
 b. left从前往后找，找到一个偶数后停止
 c. right从后往前找，找到一个奇数后停止
 d. 如果left和right都找到了对应的数据，则交换，继续a，
*/
void adjust_arr2(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left < right)
	{
		// 从前往后，找到一个偶数，找到后停止
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// 从后往前找，找一个奇数，找到后停止
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
		// 然后继续找，直到两个指针相遇
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}


