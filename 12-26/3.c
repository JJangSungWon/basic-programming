#include<stdio.h>

//2015117800 �强��
int main(void)
{
	int n;

	printf("10���� ���� �Է�>>");
	scanf("%d", &n);
	printf("10����: %d, 8����: %#o, 16����: %#0x\n\n", n,n,n);

	printf("8���� ���� �Է�>>");
	scanf("%o", &n);
	printf("10����: %d, 8����: %#o, 16����: %#0x\n\n", n,n,n);

	printf("16���� ���� �Է�>>");
	scanf("%x", &n);
	printf("10����: %d, 8����: %#o, 16����: %#0x\n\n", n,n,n);

	printf("8���� ���� �Է�>>");
	scanf("%o", &n);
	printf("10����: %d, 8����: %o, 16����: %0x\n\n", n,n,n);

	printf("16���� ���� �Է�>>");
	scanf("%x", &n);
	printf("10����: %d, 8����: %o, 16����: %0x\n\n", n,n,n);

	return 0;
}