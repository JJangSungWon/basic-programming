#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

int main(void)
{
	int a[5];
	int b[5];
	int i;

	printf("�迭 a�� ���� ���� 5�� �Է�\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	printf("\n�迭 b�� ���� ���� 5�� �Է�\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &b[i]);

	for (i = 0; i < 5; i++) {
		if (a[i] != b[i]) {
			printf("a, b�� �ٸ� ���� ������ �迭�Դϴ�!\n");
			return 0;
		}
	}
	printf("a, b�� ���� ���� ������ �迭�Դϴ�!\n");
	return 0;
}