#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//2015117800 �强��

struct point {
	double x;
	double y;
};

struct line {
	double slope;
	double yintercept;
};

struct line result;

double f_yintercept(double x1, double x2, double y1, double y2);
double f_slope(double x1, double x2, double y1, double y2);

int main(void)
{
	struct point A, B;

	puts("A�� ��ǥ ���� �Է��Ͻÿ�:");
	scanf("%lf %lf", &A.x, &A.y);

	//puts("");

	puts("B�� ��ǥ ���� �Է��Ͻÿ�:");
	scanf("%lf %lf", &B.x, &B.y);

	//puts("");

	printf("���� A, B�� ������ ������ ����� %.2lf�̰� , y������ %.2lf�Դϴ�.\n",
		f_slope(A.x, B.x, A.y, B.y), f_yintercept(A.x, B.x, A.y, B.y)
	);


	return 0;
}

double f_slope(double x1, double x2, double y1, double y2)
{

	result.slope = (y2 - y1) / (double)(x2 - x1);

	return result.slope;
}

double f_yintercept(double x1, double x2, double y1, double y2)
{
	if (x1 == x2)
		printf("x == ? �� ���� �����Դϴ�.\n");

	result.yintercept = (y1 - f_slope(x1, x2, y1, y2) * x1);
	return result.yintercept;
}