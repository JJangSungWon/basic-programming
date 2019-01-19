#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

void swap1(int a, int b);
void swap2(int *a, int *b);
void swap3(int **a, int **b);

int main(void)
{
	int a, b;

	int *pa = &a;
	int **ppa = &pa;

	int *pb = &b;
	int **ppb = &pb;

	a = 1; b = 2; swap1(a, b); // call by value ¨ç
	printf("After calling swap1(a, b), a: %d, b: %d\n\n", a, b);

	a = 1; b = 2; swap2(&a, &b);// call by (address) value ¨è
	printf("After calling swap2(&a, &b), a: %d, b: %d\n\n", a, b);

	a = 1; b = 2; swap2(pa, pb);// call by (address) value ¨é
	printf("After calling swap2(pa, pb), a: %d, b: %d\n\n", a, b);

	a = 1; b = 2; swap3(&pa, &pb);// call by (address) value ¨ê
	printf("After calling swap3(&pa, &pb), a: %d, b: %d\n\n", a, b);

	a = 1; b = 2; swap3(ppa, ppb);// call by (address) value ¨ë
	printf("After calling swap3(ppa, ppb), a: %d, b: %d\n\n", a, b);

	return 0;
}


void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int **a, int **b)
{
	int temp;
	temp = **a;
	**a = **b;
	**b = temp;
}