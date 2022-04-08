#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}

void hanoi(int n, char one, char two, char three)
{
	if (n == 1)
	{
		move(one, three);
	}
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

int main()
{
	int m;
	printf("请输入盘子个数：");
	scanf("%d", &m);
	printf("移动盘子的步骤为：\n");
	hanoi(m, 'A','B','C');
	return 0;
}