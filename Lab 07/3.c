#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//2015117800 Àå¼º¿ø
int sumAry3D_f1(int ary[][2][3], int SEC, int ROW, int COL);
int sumAry3D_f2(int(*ary)[2][3], int SEC, int ROW, int COL);
int sumAry3D_f3(int ary[2][2][3], int SEC, int ROW, int COL);

int main(void)
{
	int ary3D[][2][3] = { {{ 1,2,3 },{ 4,5,6 } },
						  {{7,8,9},{10,11,12}}};
	int sec,row, col;
	int(*p)[2][3] = ary3D;
	sec = sizeof(ary3D) / sizeof(ary3D[0]);
	row = sizeof(ary3D[0]) / sizeof(ary3D[0][0]);
	col = sizeof(ary3D[0][0]) / sizeof(ary3D[0][0][0]);

	printf("sumAry3D_f1() %d\n", sumAry3D_f1(ary3D, sec, row, col));
	printf("sumAry3D_f2() %d\n", sumAry3D_f2(p, sec, row, col));
	printf("sumAry3D_f3() %d\n", sumAry3D_f3(ary3D, sec, row, col));

}

int sumAry3D_f1(int ary[][2][3], int SEC, int ROW, int COL)
{
	int i, j, k, sum = 0;

	for (i = 0; i<SEC; i++)
		for (j = 0; j < ROW; j++)
			for (k = 0; k<COL; k++)
				sum += ary[i][j][k];

	return sum;
}

int sumAry3D_f2(int(*ary)[2][3], int SEC, int ROW, int COL)
{
	int i, j, k, sum = 0;

	for (i = 0; i<SEC; i++)
		for (j = 0; j < ROW; j++)
			for (k = 0; k<COL; k++)
				sum += *(*(*(ary+i)+j)+k);

	return sum;
}

int sumAry3D_f3(int ary[2][2][3], int SEC, int ROW, int COL)
{
	int i, j, k, sum = 0;

	for(i=0;i<SEC;i++)
		for (j = 0; j < ROW; j++)
			for (k = 0; k<COL; k++)
				sum += ary[i][j][k];

	return sum;
}