#include<stdio.h>
#include<stdlib.h>

int binary_search(int a[], int k,int size)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid - 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(a) / sizeof(a[0]);
	int k = 5;
	int ret = binary_search(a, k,size);
	if (ret == -1)
	{
		printf("找不到指定数字\n");
	}
	else
	{
		printf("该数字下标为%d\n", ret);
	}
	return 0;
}