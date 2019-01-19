#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//2015117800 �强��

int main(void)
{
	int row;
	int **arr;
	int *col;
	int *max, *min;
	double *mean;
	int sum = 0;
	puts("[input]");
	printf("���� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &row);

	//arr = (int**)malloc(sizeof(int *) * row);
	//col = (int*)malloc(sizeof(int) * row);

	arr = (int**)calloc(row, sizeof(int *));
	col = (int*)calloc(row, sizeof(int));
	max = (int*)calloc(row, sizeof(int));
	min = (int*)calloc(row, sizeof(int));
	mean = (double*)calloc(row, sizeof(double));

	for (int i = 0; i < row; i++) {
		printf("%d��° ���� �����Ͱ����� �Է��ϼ��� : ",i+1);
		scanf("%d", &col[i]);
		arr[i] = (int *)calloc(col[i], sizeof(int));
	}

	for (int i = 0; i < row; i++) {
		printf("%d���� �����͸� �Է��ϼ��� (%d��) : \n", i + 1, col[i]);

		for (int j = 0; j < col[i]; j++) {
			scanf("%d", &arr[i][j]);
			if (j == 0)
			{
				max[i] = arr[i][j];
				min[i] = arr[i][j];
			}
			else
			{
				if (max[i] < arr[i][j])
					max[i] = arr[i][j];

				if (min[i] > arr[i][j])
					min[i] = arr[i][j];
			}
			sum += arr[i][j];
		}
		mean[i] = (double)sum / col[i];
		sum = 0;
	}

	puts("\n[output]");
	for (int i = 0; i < row; i++)
	{
		printf("%d��\n", i + 1);
		printf("�ִ� �� : %d\n", max[i]);
		printf("�ּ� �� : %d\n", min[i]);
		printf("��  �� : %.2f", mean[i]);

		puts("");
	}

	free(min);
	free(max);
	free(col);
	free(mean);

	for (int i = 0; i < row; i++)
		free(arr[i]);
	free(arr);

	system("pause");
}