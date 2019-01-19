#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
 
#include<stdio.h>

int main(void)
{
	char ch = '*';
	char *c = &ch;

	printf("주소   : %p\n", c);
	printf("코드값 : %d\n", *c);
	printf("문자   : %c\n", *c);

	system("pause");
	return 0;
}