#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define TOTAL_BIT 32

//2015117800 �强�� <2������>
int main(void)
{
	int n;

	do {
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("�ϳ��� �����Ͻÿ�.\n");

		scanf("%d", &n);


	} while (n < 1 || n > 3);

	printf("���õ� �޴��� %d\n", n);


	system("pause");
	return 0;
}