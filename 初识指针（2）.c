#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[4] = { 1,2,3,5 };//4*4
	printf("%d\n", sizeof(a));//����������ܴ�С----16
	printf("%d\n", sizeof(a+0));//��������ʾ��Ԫ�ص�ַ,a+0��ʾ��Ԫ�ص�ַ----4��8
	printf("%d\n", sizeof(*a));//��Ԫ�ش�С----4
	printf("%d\n", sizeof(a+1));//�ڶ���Ԫ�ص�ַ----4��8
	printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�ش�С----4
	printf("%d\n", sizeof(&a));//&a�������ַ,����ĵ�ַ�Ĵ�С----4��8
	printf("%d\n", sizeof(*&a));//�����С----16
	printf("%d\n", sizeof(&a+1));//��������������¸���ַ----4��8
	printf("%d\n", sizeof(&a[0]));//��Ԫ�ص�ַ�Ĵ�С----4��8
	printf("%d\n", sizeof(&a[0]+1));//�ڶ���Ԫ�صĵ�ַ----4��8
	return 0;
}
