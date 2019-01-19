#define _CRT_SECURE_NO_WARNINGS

//2015117800 Àå¼º¿ø

#include<stdio.h>

int main(void)
{
	int value = 0x2F24263F;
	char * pc = (char *)&value;
	char ch;

	int i;

	for (i = 0; i <= 3; i++) {
		ch = *(pc + i);
		printf("%c %p\n", ch, pc+i);
		//printf("%c %p\n", ch, &ch);
	}

	system("pause");
	return 0;
}