#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct s1
{
	char name[10];
	int age;
	char address[20];
};
struct s2
{
	char name[10]; 
	int num;
};

struct s3
{
	int num;
	struct s1 m;
};

int main()
{
	struct s1 a = { 0 };
	struct s2 b = { 0 };
	//第一个成员在与结构体变量偏移量为0的地址处
	//其他成员变量要对齐到某个数字的整数倍的地址处
	//结构体总大小为最大对齐数的整数倍,若嵌套了结构体，则总大小为所有结构体最大对齐数的整数倍
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s3));
	return 0;
}