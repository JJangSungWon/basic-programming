#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

int main(void)
{
	int data1 = 10, data2 = 20;
	int *p1 = &data1, *p2 = &data2;
	int sum = 0;
	int **dp;

	dp = &p1;
	**dp = 100;
	sum += **dp;

	dp = &p2;
	**dp = 200;
	sum += **dp;

	printf("sum = %d", sum);

	system("pause");
	return 0;

}