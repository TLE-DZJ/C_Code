#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//随机生产1-100的随机数，然后猜
int main()
{
	int i = 0;
	//拿时间戳设置随机数的生成起点
	srand((unsigned int)time(NULL));
	while(1)
	{
		//生成1-100的随机数
		int r = rand() % 100 + 1;
		printf("请输入您要猜的数字：");
		scanf("%d", &i);
		printf("随机数为%d\n", r);
		if (i == r)
		{
			printf("正确\n");
			break;
		}
		else
		{
			printf("错误\n");
		}
	}
	return 0;
}