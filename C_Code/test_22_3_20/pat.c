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