#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//n�Ľ׳�
	int i = 0;
	int n = 0;
	int m = 1;
	printf("������һ����n��");
	scanf("%d", &n);
	if (n == 0)
	{
		m = 1;
		printf("n�Ľ׳�Ϊ��%d\n", m);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			m =m*i;
		}
		printf("n�Ľ׳�Ϊ��%d\n", m);
	}
	return 0;
}