#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//2015117800 �强�� <7������>

int n;
int sum = 0;
void factorial();
int main(void)
{
	while (1) {
		printf("���� 1���� �Է��ϼ��� : ");
		scanf("%d", &n);
		if (n < 0) {
			printf("���α׷��� �����մϴ�.");
			return 0;
		}

		factorial(); //�ݺ��� �̿��� �Լ��� �����Ͽ����ϴ�.

		printf("--------------\n");
		printf("total = %d\n\n", sum);
		sum = 0;
	}
	system("pause");
	return 0;
}

void factorial() {
	int i, j;
	int mul = 1;

	for (i = 1; i <= n; i++) {
		printf("%d!=", i);
		for (j = i; j >= 1; j--)
			mul = mul * j;
		printf("%d", mul);
		sum += mul;
		mul = 1;
		puts("");
	}
}