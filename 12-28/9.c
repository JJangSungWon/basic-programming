#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define TOTAL_BIT 32
//2015117800 �强�� <9������>
int main(void)
{
	int n, copy;
	int mask;

	printf("���� �Է�:");
	scanf("%d", &n);

	copy = n;

	mask = 0xf000;

	mask = ~mask;

	n = n & mask;
	printf("(13-16) 0 ���� ������ �� : %d\n", n);

	n = copy;
	mask = ~mask;

	n = n | mask;
	printf("(13-16) 1 ���� ������ �� : %d\n", n);

	n = copy;
	n = n ^ mask;
	printf("(13-16) 0�� 1�� 1�� 0���� ������ �� : %d\n", n);



	system("pause");
	return 0;
}