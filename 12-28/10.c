#define _CRT_SECURE_NO_WARNINGS
//22015117800 장성원 <10번문제>
#include<stdio.h>

int main(void)
{
	int n, copy;
	int mask = 0xffff;


	printf("정수를 하나 입력하시오 : ");
	scanf("%d", &n);

	copy = n;
	n = n & mask;


	printf("입력한 %d의 하위 16비트는 8진수로 %#o, 16진수로 %#x\n", copy, n, n);

	system("pause");

	return 0;
}