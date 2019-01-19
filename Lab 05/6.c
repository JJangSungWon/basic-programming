#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

int main(void)
{
	int i = 0x3C405B7B;
	char *p = &i;
	char *tmp;
	char ch;
	
	p += 1;
	tmp = p;

	printf("*p++ = %c\n", *p++);
	p = tmp;
	printf("*++p = %c\n", *++p);
	p = tmp;
	printf("(*p)++ = %c\n", (*p)++);
	--(*p);
	printf("++*p = %c\n", ++(*p));


	system("pause");
	return 0;
}