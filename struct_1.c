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
	//��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
	//������Ա����Ҫ���뵽ĳ�����ֵ��������ĵ�ַ��
	//�ṹ���ܴ�СΪ����������������,��Ƕ���˽ṹ�壬���ܴ�СΪ���нṹ������������������
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s3));
	return 0;
}