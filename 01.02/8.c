#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

int main(void)
{
	double n1, n2;
	double *p1, *p2;

	scanf("%lf %lf", &n1, &n2);
	p1 = &n1;
	p2 = &n2;

	printf("%f + %f = %f\n",*p1, *p2, *p1 + *p2);
	printf("%f - %f = %f\n", *p1, *p2, *p1 - *p2);
	printf("%f * %f = %f\n", *p1, *p2, *p1 * *p2);
	printf("%f / %f = %f\n", *p1, *p2, *p1 / *p2);

	system("pause");
	return;
}