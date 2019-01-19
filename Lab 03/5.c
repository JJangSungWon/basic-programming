#include<stdio.h>
//2015117800 장성원
int main(void)
{
	int num, n;
	int result1, result2, result3, result4;

	printf("정수 입력 >>>");
	scanf("%d", &num);

	printf("n 입력(1~31) >> ");
	scanf("%d", &n);

	result1 = (num & ( 1 <<n-1)) ? 1 : 0;
	result2 = (num | (1<<(n-1)));
	result3 = (num & ~(1<<(n-1)));
	result4 = (num ^ (1<<(n-1)));

	printf("정수 %d의 %d번째 비트는 %d이다\n", num, n, result1);
	printf("정수 %d의 %d번째 비트를 1로 지정한 수는 %d이다\n", num, n, result2);
	printf("정수 %d의 %d번째 비트를 0으로 지정한 수는 %d이다\n", num, n, result3);
	printf("정수 %d의 %d번째 비트를 반대로 지정한 수는 %d이다\n", num, n, result4);

	return 0;
}