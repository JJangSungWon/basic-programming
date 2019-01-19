#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//2015117800 장성원

int main(void)
{
	srand((unsigned)time(NULL));

	int n,sum=0;
	int *arr;

	puts("[input]");
	puts("배열의 크기를 입력하세요 : ");
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	puts("[output]");

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % n;
		sum += arr[i];
		printf("배열 [ %d] : %d\n", i + 1, arr[i]);
	}

	printf("평균 : %.1lf\n", (double)sum / n);

	free(arr);

	system("pause");
	return 0;
}