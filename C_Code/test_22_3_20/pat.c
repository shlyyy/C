#include "main.h"


/*
����ˮ����
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
*/
int DrinkSoda(int money)
{
	int soda = money;
	
	int empty_bottle = soda;
	int sum_soda = soda;

	while (empty_bottle > 1)
	{
		soda = empty_bottle / 2; // ������ƿ��һƿ��ˮ
		sum_soda = sum_soda + soda;
		empty_bottle = soda + empty_bottle % 2; // ��ƿ
	}

	// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣���ʵ���Ǹ��Ȳ����У�money * 2 - 1
	// return money * 2 - 1;
	return sum_soda;
}