#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원 <4번문제>
//정수 최대 범위가 2147483647 즉 총 10자리라서(최소도 마친가지로 10자리) 11자리를 입력하면 올바른 값이 나오지 않습니다, 
int main(void)
{
	int n;
	int i;
	int div = 10;
	int sum = 0;
	int copy, max = 1;
	int result = 0;
	int flag = 0;
	printf("정수1개를 입력하세요.\n");
	scanf("%d", &n);

	if (n < 0)
		flag = 1; //negative number check

	copy = n;

	//자리 수 구하기
	while (1) {
		result = n / div;
		if (result != 0) {
			n = n / 10;
			max++;
		}
		else
			break;
	}

	div = 1;
	for (i = 1; i < max; i++)
		div = div * 10;

	//printf("div = %d", div);
	for (i = 1; i <= max; i++) {
		sum += (copy / div);
		copy = copy % div;
		div = div / 10;
	}
	printf("입력한 수의 자릿수 %d이고\n", max);
	printf("각 자릿수의 합은 : %d입니다.\n", sum);

	system("pause");
	return 0;
}