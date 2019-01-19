#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//2015117800 Àå¼º¿ø

int main(void)
{
	srand((unsigned)time(NULL));
	int ***arr;
	int i, j, k;

	arr = (int ***)malloc(sizeof(int **) * 4);
	
	for (i = 0; i < 4; i++) {
		arr[i] = (int**)malloc(sizeof(int *) * 4);
		for (j = 0; j < 4; j++)
			arr[i][j] = (int *)malloc(sizeof(int) * 4);
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 4; k++) {
				arr[i][j][k] = rand() % 7;
				printf("%3d", arr[i][j][k]);
			}
			puts("");
		}
		puts("");
	}
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			free(arr[i][j]);

	for(i=0;i<4;i++)
		free(arr[i]);
	free(arr);

	system("pause");
	return 0;
}