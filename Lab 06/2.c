#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

int main(void)
{
	int a = 2;
	int b = 3;
	int c = 4;
	int *arr[3] = { &a, &b, &c };
	int i;

	printf("������ �迭�� �迭��Ҹ� �̿��� a,b,c ���\n");

	for (i = 0; i < 3; i++) {
		if (i == 0)
			printf("a : ");
		else if (i == 1)
			printf(" , b : ");
		else
			printf(" , c : ");

		printf("%d ", *arr[i]);
	}
	return 0;
}