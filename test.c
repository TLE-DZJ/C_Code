#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�������1-100���������Ȼ���
int main()
{
	int i = 0;
	//��ʱ���������������������
	srand((unsigned int)time(NULL));
	while(1)
	{
		//����1-100�������
		int r = rand() % 100 + 1;
		printf("��������Ҫ�µ����֣�");
		scanf("%d", &i);
		printf("�����Ϊ%d\n", r);
		if (i == r)
		{
			printf("��ȷ\n");
			break;
		}
		else
		{
			printf("����\n");
		}
	}
	return 0;
}