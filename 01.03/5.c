#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

int main(void)
{
	int a[5];
	int b[5];
	int i;

	printf("배열 a를 위한 정수 5개 입력\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	printf("\n배열 b를 위한 정수 5개 입력\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	for (i = 0; i < 5; i++) {
		if (a[i] != b[i]) {
			printf("a, b는 다른 값을 가지는 배열입니다!\n");
			return 0;
		}
	}
	printf("a, b는 같은 값을 가지는 배열입니다!\n");
	return 0;
}