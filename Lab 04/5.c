#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强�� <5������>
int main(void)
{
	int n1, n2;
	char ch;

	while (1) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &n1);
		getchar();

		if (n1 < 0) { //n1 negative check
			printf("--���� ������ �Է��Ͻÿ�--\n");
			continue;
		}
		printf("�����ڸ� �Է��ϼ���:");
		scanf("%c", &ch);
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &n2);

		if (n2 < 0) { //n2 negative check
			printf("--���� ������ �Է��Ͻÿ�--\n");
			printf("������ �Է��ϼ��� : ");
			scanf("%d", &n2);
		}
		if (ch == '+')
			printf(">>> %d %c %d = %d\n", n1, ch, n2, n1 + n2);
		else if (ch == '-')
			printf(">>> %d %c %d = %d\n", n1, ch, n2, n1 - n2);
		else if (ch == '*')
			printf(">>> %d %c %d = %d\n", n1, ch, n2, n1 * n2);
		else if (ch == '/') {
			if (n2 == 0)
				printf(">>> Error\n");
			else
				printf(">>> %d %c %d = %.2lf\n", n1, ch, n2, (double)n1 / (double)n2);
		}
		getchar();
		printf("1�� �� ���� �Ͻðڽ��ϱ�?  Y/N) : ");
		scanf("%c", &ch);

		if (ch == 'Y' || ch == 'y') {
			getchar();
		}
		else
			break;

		puts("");
	}

	puts("���α׷��� �����մϴ�.\n");
	system("pause");
	return 0;
}