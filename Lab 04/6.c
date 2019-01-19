#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

#define MAX 20
//2015117800 장성원 <6번문제>
int main(void)
{
	int n;
	int count = 0, count1 = 0;
	int total = 0;
	double b = 0;
	int min = 0;
	int max = 0;
	int flag1 = 1, flag2 = 0, flag3 = 1;

	printf("정수 데이터를 입력하세요 (종료 : 99999)\n");

	while (1) {
		scanf("%d", &n);
		if (n == 99999)
			break;

		//처음 수 min에 넣기
		if (flag3 == 1) {
			min = n;
			max = n;
			flag3 = 0;
		}

		count++;
		total += n;
		if (min > n)
			min = n;
		if (max < n)
			max = n;

		if (n < 10 || n>90)
			flag1 = 0;
		if (n < 20)
			flag2 = 1;


	}

	b = (float)total / (float)count;

	puts("\n");

	printf("입력한 데이터의 개수 : \t\t%5d\n", count);
	printf("총합 : \t\t\t\t%5d\n", total);
	printf("평균 : \t\t\t       %5.2lf\n", b);
	printf("최소 값: \t\t\t%5d\n", min);
	printf("최대 값: \t\t\t%5d\n", max);
	printf("20보다 작은수가 있는가?");
	if (flag2 == 1)
		printf("\t\t true\n");
	else
		printf("\t\t false\n");

	printf("모든 수가 10에 90사이의 정수인가?");
	if (flag1 == 1)
		printf("true\n");
	else
		printf("false\n");

	system("pause");

	return 0;
}