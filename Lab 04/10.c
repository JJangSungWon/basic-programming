#define _CRT_SECURE_NO_WARNINGS
//22015117800 �强�� <10������>
#include<stdio.h>

int main(void)
{
	int n, copy;
	int mask = 0xffff;


	printf("������ �ϳ� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	copy = n;
	n = n & mask;


	printf("�Է��� %d�� ���� 16��Ʈ�� 8������ %#o, 16������ %#x\n", copy, n, n);

	system("pause");

	return 0;
}