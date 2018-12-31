#include<stdio.h>

//2015117800 장성원
int main(void)
{
	int n;

	printf("10진수 정수 입력>>");
	scanf("%d", &n);
	printf("10진수: %d, 8진수: %#o, 16진수: %#0x\n\n", n,n,n);

	printf("8진수 정수 입력>>");
	scanf("%o", &n);
	printf("10진수: %d, 8진수: %#o, 16진수: %#0x\n\n", n,n,n);

	printf("16진수 정수 입력>>");
	scanf("%x", &n);
	printf("10진수: %d, 8진수: %#o, 16진수: %#0x\n\n", n,n,n);

	printf("8진수 정수 입력>>");
	scanf("%o", &n);
	printf("10진수: %d, 8진수: %o, 16진수: %0x\n\n", n,n,n);

	printf("16진수 정수 입력>>");
	scanf("%x", &n);
	printf("10진수: %d, 8진수: %o, 16진수: %0x\n\n", n,n,n);

	return 0;
}