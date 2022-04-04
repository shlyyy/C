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

/*
��������ż��˳��
��������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
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
˼·��
1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
2. ѭ������һ�²���
 a. ���left��right��ʾ������[left, right]��Ч������b���������ѭ��
 b. left��ǰ�����ң��ҵ�һ��ż����ֹͣ
 c. right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
 d. ���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��
*/
void adjust_arr2(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left < right)
	{
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}


