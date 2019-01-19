#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//2015117800 Àå¼º¿ø
int* doubling(int a[], int size);

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int *b,size,i;
	puts("[output]");

	size = sizeof(a) / sizeof(a[0]);

	b = doubling(a, size);

	puts("a[5] : ");
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);

	puts("\n");

	puts("b[5] : ");
	for (i = 0; i < size; i++)
		printf("%d ", b[i]);

	system("pause");

	free(b);
	return 0;
}

int* doubling(int a[], int size)
{
	int *b;
	b = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++)
		b[i] = a[i] * 2;
	return b;
}