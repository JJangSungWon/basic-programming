#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 Àå¼º¿ø

int main(void)
{
	int n1, n2;
	double sum = 0;
	int *p = (int *)&sum;

	scanf("%d %d", p, p+1);

	printf("%d +  %d = %d\n", *p, *(p + 1), *p + *(p + 1));
	printf("%d -  %d = %d\n", *p, *(p + 1), *p - *(p + 1));
	printf("%d *  %d = %d\n", *p, *(p + 1), *p * *(p + 1));
	printf("%d /  %d = %d\n", *p, *(p + 1), *p / *(p + 1));

	system("pause");
	return 0;
}