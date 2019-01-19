#define _CRT_SECURE_NO_WARNINGS
	
#include<stdio.h>
#include<conio.h>
#include<string.h>
//2015117800 장성원
void change2(char *str);
void change1(char *str);

int main(int argc, char *argv[])
{
	int n,i,len=0;
	char str[100];
	printf("%d %d %d %d\n", 'x','y','z','a');
	puts("1. 암호화");
	puts("2. 복호화");

	printf("\n메뉴 선택 >> ");
	scanf("%d", &n);

	if (n == 1)
	{
		getchar();
		printf("\n문자열 입력 >> ");
		gets(str);
		
		change1(str);
		printf("암호화된 문자열 출력 >> ");
		printf("%s", str);

	}
	else if (n == 2)
	{
		getchar();
		printf("문자열 입력 >> ");
		gets(str);

		change2(str);
		printf("\n복호화된 문자열 출력 >> ");
		printf("%s", str);
	}

	return 0;
}

void change1(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (*(str + i) == ' ')
			continue;
		if (*(str + i) < 'x')
			*(str + i) = *(str + i) + 3;
		else
			*(str + i) = *(str + i) - 23;
	}
}

void change2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (*(str + i) == ' ')
			continue;
		if (*(str + i) > 'c')
			*(str + i) = *(str + i) - 3;
		else
			*(str + i) = *(str + i) + 23;
	}
}
