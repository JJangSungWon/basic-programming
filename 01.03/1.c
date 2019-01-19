#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

int main(void)
{
	int ary[3] = { 8,2,8 };
	int*p = ary;
	int i, j, k;

	printf("(1) 1차원 배열과 배열포인터\n");
	printf("ary를 이용한 출력\n");

	for (i = 0; i < 3; i++)
		printf("%5d ", ary[i]);

	puts("");

	printf("p를 이용한 출력\n");
	for (i = 0; i < 3; i++)
		printf("%5d ", *(p + i));

	puts("");

	printf("\n(2) 2차원 배열과 배열포인터\n");

	int ary2[][3] = { {4,2,3}, {5,2,3} };
	int(*p2)[3] = ary2;
	int count = 0;

	printf("ary를 이용한출력\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d ", ary2[i][j]);
		}
		puts("");
	}
	puts("");

	printf("p를 이용한 출력\n");
	for (i = 0; i < 6; i++) {

		printf("%5d ", *(p2[0] + i));
		count++;
		if (count % 3 == 0)
			puts("");
	}
	count = 0;

	printf("\n(3) 3차원 배열과 배열포인터\n");
	int ary3[2][2][3] = { {{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}} };
	int(*p3)[2][3] = ary3;

	printf("ary를 이용한출력\n");
	for (k = 0; k < 2; k++) {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf("%5d ", ary3[k][i][j]);
			}
			puts("");
		}
		puts("");
	}
	puts("");


	printf("p를 이용한 출력\n");
	for (i = 0; i < 12; i++) {

		printf("%5d ", *((*p3[0]) + i));
		count++;
		if (count % 3 == 0)
			puts("");
		if (count % 6 == 0)
			puts("");
	}

	system("pause");
	return 0;
}