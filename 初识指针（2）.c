#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[4] = { 1,2,3,5 };//4*4
	printf("%d\n", sizeof(a));//计算数组的总大小----16
	printf("%d\n", sizeof(a+0));//数组名表示首元素地址,a+0表示首元素地址----4或8
	printf("%d\n", sizeof(*a));//首元素大小----4
	printf("%d\n", sizeof(a+1));//第二个元素地址----4或8
	printf("%d\n", sizeof(a[1]));//第二个元素大小----4
	printf("%d\n", sizeof(&a));//&a是数组地址,数组的地址的大小----4或8
	printf("%d\n", sizeof(*&a));//数组大小----16
	printf("%d\n", sizeof(&a+1));//跳过整个数组的下个地址----4或8
	printf("%d\n", sizeof(&a[0]));//首元素地址的大小----4或8
	printf("%d\n", sizeof(&a[0]+1));//第二个元素的地址----4或8
	return 0;
}
