#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

int main(void)
{
	int arr[5][5] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int i, j, sum = 0;

	printf("���� ǥ�� ���� ��, ���� �� �׸��� ��� ���� ���մϴ�\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", arr[i][j]);
		}
		puts("");
	}

	//������
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == 0)
				arr[0][4] += arr[0][j];
			else if (i == 1)
				arr[1][4] += arr[1][j];
			else if (i == 2)
				arr[2][4] += arr[2][j];
			else if (i == 3)
				arr[3][4] += arr[3][j];
		}
	}

	//������
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (j == 0)
				arr[4][0] += arr[i][0];
			else if (j == 1)
				arr[4][1] += arr[i][1];
			else if (j == 2)
				arr[4][2] += arr[i][2];
			else if (j == 3)
				arr[4][3] += arr[i][3];
		}
	}

	//�� ��
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i != 4 && j != 4)
				sum += arr[i][j];
		}
	}

	arr[4][4] = sum;

	printf("\n���� ��, ���� �� �׸��� ��� ���� ���� ��� ���� �������� ��Ÿ����\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", arr[i][j]);
		}
		puts("");
	}
	return 0;
}