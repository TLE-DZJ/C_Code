#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Bubble(int a[])
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			//����
			if (a[j] < a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int a[10] = { 0 };
	int i = 0;
	printf("������10������\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	Bubble(a);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}