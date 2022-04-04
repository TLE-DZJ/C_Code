#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//n的阶乘
	int i = 0;
	int n = 0;
	int m = 1;
	printf("请输入一个数n：");
	scanf("%d", &n);
	if (n == 0)
	{
		m = 1;
		printf("n的阶乘为：%d\n", m);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			m =m*i;
		}
		printf("n的阶乘为：%d\n", m);
	}
	return 0;
}