#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

int main(void)
{
	int data1 = 10, data2 = 20;
	int sum = 0;
	int *p;

	p = &data1;
	*p = 100;
	sum += *p;

	p = &data2;
	*p = 200;
	sum += *p;

	printf("sum = %d", sum);

	system("pause");
	return 0;
}