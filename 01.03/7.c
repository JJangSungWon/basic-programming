#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

int main(void)
{
	int A[2][3];
	int B[3][2];
	int C[2][2] = { 0, };
	int i, j, k;
	int sum = 0;

	printf("2�� 3�� ��� A�� ���� �Է� >> ");

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &A[i][j]);

	printf("3�� 2�� ��� B�� ���� �Է� >> ");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &B[i][j]);

	puts("��� A");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", A[i][j]);
		}
		puts("");
	}

	puts("\n��� B");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", B[i][j]);
		}
		puts("");
	}

	puts("\n��� C");
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



	puts("\nA * B => C ��� ");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", C[i][j]);
		}
		puts("");
	}

	return 0;
}