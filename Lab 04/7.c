#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//2015117800 장성원 <7번문제>

int n;
int sum = 0;
void factorial();
int main(void)
{
	while (1) {
		printf("정수 1개를 입력하세요 : ");
		scanf("%d", &n);
		if (n < 0) {
			printf("프로그램을 종료합니다.");
			return 0;
		}

		factorial(); //반복을 이용한 함수로 구현하였습니다.

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