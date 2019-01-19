#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원 <5번문제>
int main(void)
{
	int n1, n2;
	char ch;

	while (1) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &n1);
		getchar();

		if (n1 < 0) { //n1 negative check
			printf("--양의 정수를 입력하시오--\n");
			continue;
		}
		printf("연산자를 입력하세요:");
		scanf("%c", &ch);
		printf("정수를 입력하세요 : ");
		scanf("%d", &n2);

		if (n2 < 0) { //n2 negative check
			printf("--양의 정수를 입력하시오--\n");
			printf("정수를 입력하세요 : ");
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
		printf("1번 더 수행 하시겠습니까?  Y/N) : ");
		scanf("%c", &ch);

		if (ch == 'Y' || ch == 'y') {
			getchar();
		}
		else
			break;

		puts("");
	}

	puts("프로그램을 종료합니다.\n");
	system("pause");
	return 0;
}