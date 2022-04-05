#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//输出菱形图案
	int i = 0;
	int j = 0;
	int k = 0;
	//正三角
	for (i = 0; i < 7; i++)
	{
		for (k = 0; k < 7-i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//倒三角
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < i+2; k++)
		{
			printf(" ");
		}
		for (j = 0; j < 9-2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}