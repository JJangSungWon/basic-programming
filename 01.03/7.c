#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

int main(void)
{
	int A[2][3];
	int B[3][2];
	int C[2][2] = { 0, };
	int i, j, k;
	int sum = 0;

	printf("2행 3열 행렬 A의 원소 입력 >> ");

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &A[i][j]);

	printf("3행 2열 행렬 B의 원소 입력 >> ");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &B[i][j]);

	puts("행렬 A");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", A[i][j]);
		}
		puts("");
	}

	puts("\n행렬 B");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", B[i][j]);
		}
		puts("");
	}

	puts("\n행렬 C");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", C[i][j]);
		}
		puts("");
	}

	for (k = 0; k < 2; k++) {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				sum += A[k][j] * B[j][i];
			}
			C[k][i] = sum;
			sum = 0;
		}
	}



	puts("\nA * B => C 행렬 ");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", C[i][j]);
		}
		puts("");
	}

	return 0;
}