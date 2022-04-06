#include "main.h"



int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


void Calc1()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	
	do 
	{
		printf("***********************\n");
		printf("**** 1.add   2.sub ****\n");
		printf("**** 3.mul   4.div ****\n");
		printf("****     0.exit    ****\n");
		printf("***********************\n");

		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入操作数:");
			scanf("%d%d", &x, &y);
			ret = Add(x, y);
			printf("结果是:%d\n", ret);
			break;
		case 2:
			printf("请输入操作数:");
			scanf("%d%d", &x, &y);
			ret = Sub(x, y);
			printf("结果是:%d\n", ret);
			break;
		case 3:
			printf("请输入操作数:");
			scanf("%d%d", &x, &y);
			ret = Mul(x, y);
			printf("结果是:%d\n", ret);
			break;
		case 4:
			printf("请输入操作数:");
			scanf("%d%d", &x, &y);
			ret = Div(x, y);
			printf("结果是:%d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
}

void Calc()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int (*p[5])(int, int) = { 0, Add, Sub, Mul, Div }; // 转移表

	do
	{
		printf("***********************\n");
		printf("**** 1.add   2.sub ****\n");
		printf("**** 3.mul   4.div ****\n");
		printf("****     0.exit    ****\n");
		printf("***********************\n");

		printf("请选择:");
		scanf("%d", &input);
		if (input <= 4 && input >= 1)
		{
			printf("请输入操作数:");
			scanf("%d%d", &x, &y);
			ret = p[input](x, y);
			printf("结果是:%d\n", ret);
		}
		else if(input == 0)
		{
			printf("程序退出\n");
		}
		else
		{
			printf("输入有误\n");
		}
	} while (input);
}