#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct stu
{
	char name[10];
	int num;
};

void test(struct stu *ps)
{
	strcpy(ps->name, "ÕÅÈý");
	ps->num = 1;
}

int main()
{
	struct stu s={0};
	test(&s);
	printf("%d %s\n", s.num, s.name);
	return 0;
}