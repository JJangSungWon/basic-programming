#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

void print(int **arr);
void su(int arr1[][3], int arr2[][3], int sum[][3]);
void s(int arr1[][3], int arr2[][3], int sum[][3]);

int main(void)
{
	int arr1[4][3];
	int arr2[4][3];
	int sum[4][3]; //합
	int sub[4][3]; //차
	int i, j;
	int temp = 1;

	//input
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			arr1[i][j] = temp++;

	temp = 13;
	//input
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			arr2[i][j] = temp++;

	puts("다음 두 행렬의 합과 차를 구하는 프로그램입니다");
	print(arr1);

	puts("");

	print(arr2);

	puts("\n위의 두 행렬 합의 결과 값입니다.");
	s(arr1, arr2, sum);
	print(sum);

	puts("\n위의 두 행렬 차의 결과 값입니다.");// 결과값이 -12여서 위에 함수에서 아래ㄱ 함수를 - 하였습니다.
	su(arr1, arr2, sub);
	print(sub);
	return 0;
}

void print(int arr[][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		puts("");
	}
}

void s(int arr1[][3], int arr2[][3], int sum[][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void su(int arr1[][3], int arr2[][3], int sum[][3])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
}