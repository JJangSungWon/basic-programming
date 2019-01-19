#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

int main(void)
{
	int a = 2;
	int b = 3;
	int c = 4;
	int *arr[3] = { &a, &b, &c };
	int i;

	printf("포인터 배열의 배열요소를 이용한 a,b,c 출력\n");

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