#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//��ˮ�ɻ���,һ����λ������λ���������͵��ڸ�������
	int a = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	printf("������һ������");
	scanf("%d", &a);
	i = a / 100;
	j = a / 10 - i * 10;
	k = a % 10;
	if (a == i * i * i + j * j * j + k * k * k)
	{
		printf("������ˮ�ɻ���\n");
	}
	else
	{
		printf("��������ˮ�ɻ���\n");
	}
	return 0;
}