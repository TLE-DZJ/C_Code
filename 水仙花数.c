#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//求水仙花数,一个三位数，各位数字立方和等于该数本身
	int a = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	printf("请输入一个数：");
	scanf("%d", &a);
	i = a / 100;
	j = a / 10 - i * 10;
	k = a % 10;
	if (a == i * i * i + j * j * j + k * k * k)
	{
		printf("该数是水仙花数\n");
	}
	else
	{
		printf("该数不是水仙花数\n");
	}
	return 0;
}