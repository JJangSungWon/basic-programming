#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define TOTAL_BIT 32
//2015117800 장성원 <9번문제>
int main(void)
{
	int n, copy;
	int mask;

	printf("정수 입력:");
	scanf("%d", &n);

	copy = n;

	mask = 0xf000;

	mask = ~mask;

	n = n & mask;
	printf("(13-16) 0 으로 지정한 수 : %d\n", n);

	n = copy;
	mask = ~mask;

	n = n | mask;
	printf("(13-16) 1 으로 지정한 수 : %d\n", n);

	n = copy;
	n = n ^ mask;
	printf("(13-16) 0은 1로 1은 0으로 지정한 수 : %d\n", n);



	system("pause");
	return 0;
}