#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��
void print(int arr[][4]);
int main(void)
{
	int A[4][4];
	int B[4][4] = { 0, };
	int i, j;
	int temp = 1;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			A[i][j] = temp++;

	printf("��� A\n");
	print(A);

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			B[j][i] = A[i][j];


	printf("\nA�� ��ġ ��� B\n");
	print(B);
}

void print(int arr[][4])
{
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d", arr[i][j]);
		}
		puts("");
	}
}