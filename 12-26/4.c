#include<stdio.h>

//2015117800 �强��
#define SQ2(x) ((x) * (x))
#define SQ4(x) ((SQ2(x) * SQ2(x)))
int main(void)
{
	float n;

	printf("x�� ���� �Ǽ��� �Է��Ͻÿ� :");
	scanf("%f", &n);
	printf("x�� ������ %.1f�Դϴ�\n", SQ2(n));
	printf("x�� �������� %.1f�Դϴ�\n", SQ4(n));

	return 0;
}