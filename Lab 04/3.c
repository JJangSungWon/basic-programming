#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define TOTAL_BIT 32
//2015117800 �强�� <3������>
int main(void)
{
	char c = 'k'; //������ �����ϰ� k�� �����Ͽ����ϴ�.
	char ch;
	int count = 1;

	printf("���ĺ� �ҹ��� �ϳ��� ������ ���ÿ�.\n");
	do {
		scanf("%c", &ch);

		if (ch > c) {
			printf("�Է��� �ƽ�Ű �ڵ� ���� �� Ů�ϴ�.\n");
			count++;
			getchar();
			continue;
		}
		else if (ch < c) {
			printf("�Է��� ������ �ƽ�Ű �ڵ� ���� �� �۽��ϴ�\n");
			count++;
			getchar();
			continue;
		}
		fflush(stdin);
	} while (ch != c);

	printf("�����Դϴ�! �õ�Ƚ���� %d��!\n", count);

	system("pause");
	return 0;
}