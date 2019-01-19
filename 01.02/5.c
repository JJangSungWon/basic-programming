#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

int main(void)
{
	int i = 0x324F3A24;
	char * p = (char *)&i;
	int d;
	int k;

	for (k = 3;k >= 0; k--) {
		d = *(p + k);
		printf("%X", d);
	}

	system("pause");
	return 0;
}