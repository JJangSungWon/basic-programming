#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
 
#include<stdio.h>

int main(void)
{
	char ch = '*';
	char *c = &ch;

	printf("�ּ�   : %p\n", c);
	printf("�ڵ尪 : %d\n", *c);
	printf("����   : %c\n", *c);

	system("pause");
	return 0;
}