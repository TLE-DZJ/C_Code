#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ADD(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	//函数指针--存放函数的地址
	int a = 10;
	int b = 20;
	int (*p)(int, int) = ADD;
	printf("%d\n", (*p)(a,b));
	return 0;
}