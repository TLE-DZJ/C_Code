#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ADD(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	//����ָ��--��ź����ĵ�ַ
	int a = 10;
	int b = 20;
	int (*p)(int, int) = ADD;
	printf("%d\n", (*p)(a,b));
	return 0;
}