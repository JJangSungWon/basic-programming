#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
#include<stdio.h>
void printAry1D(int ary[], int size);
void aryTimes(int *ary, int size);

int main(void)
{
	int ary1D[] = { 1,2,3,4,5,6 };
	int size;

	size = sizeof(ary1D) / sizeof(ary1D[0]);
	printf("before : "); 
	printAry1D(ary1D, size);
	aryTimes(ary1D, size);
	printf("after : ");
	printAry1D(ary1D, size);
}

void printAry1D(int ary[], int size)
{
	int i;

	for (i = 0; i < size; i++) {
		if (i == size - 1)
			printf("%d ", ary[i]); //맨 뒤에는 , 안찍기 때문에
		else
			printf("%d ", ary[i]);
	}
	puts("");
}

void aryTimes(int *ary, int size)
{
	int temp = 10;
	int i;

	for (i = 0; i < size; i++)
		*(ary+i) = *(ary+i) * temp;
}