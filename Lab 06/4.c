#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

void print(int **arr);
void su(int arr1[][3], int arr2[][3], int sum[][3]);
void s(int arr1[][3], int arr2[][3], int sum[][3]);

int main(void)
{
	int arr1[4][3];
	int arr2[4][3];
	int sum[4][3]; //��
	int sub[4][3]; //��
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

	puts("���� �� ����� �հ� ���� ���ϴ� ���α׷��Դϴ�");
	print(arr1);

	puts("");

	print(arr2);

	puts("\n���� �� ��� ���� ��� ���Դϴ�.");
	s(arr1, arr2, sum);
	print(sum);

	puts("\n���� �� ��� ���� ��� ���Դϴ�.");// ������� -12���� ���� �Լ����� �Ʒ��� �Լ��� - �Ͽ����ϴ�.
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