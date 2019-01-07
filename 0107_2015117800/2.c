#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//2015117800 Àå¼º¿ø
int sumAry2D_f1(int ary[][3], int ROW, int COL);
int sumAry2D_f2(int (*ary)[3], int ROW, int COL);
int sumAry2D_f3(int ary[2][3], int ROW, int COL);

int main(void)
{
	int ary2D[][3] = { { 1,2,3},{4,5,6} };
	int row,col;

	row = sizeof(ary2D) / sizeof(ary2D[0]);
	
	col = sizeof(ary2D[0]) / sizeof(ary2D[0][0]);

	printf("sumAry2D_f1() %d\n", sumAry2D_f1(ary2D, row,col));
	printf("sumAry2D_f2() %d\n", sumAry2D_f2(&ary2D[0], row,col));
	printf("sumAry2D_f3() %d\n", sumAry2D_f3(ary2D, row,col));

}

int sumAry2D_f1(int ary[][3], int ROW, int COL)
{
	int i, j,sum = 0;
	for (i = 0; i < ROW; i++)
		for(j=0;j<COL;j++)
			sum += ary[i][j];

	return sum;
}

int sumAry2D_f2(int (*ary)[3], int ROW, int COL)
{
	int i, j, sum = 0;
	for (i = 0; i < ROW; i++)
		for (j = 0; j<COL; j++)
			sum += *(*(ary+i)+j);

	return sum;
}

int sumAry2D_f3(int ary[2][3], int ROW, int COL)
{
	int i, j, sum = 0;
	for (i = 0; i < ROW; i++)
		for (j = 0; j<COL; j++)
			sum += ary[i][j];

	return sum;
}