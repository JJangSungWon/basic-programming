#define _CRT_SECURE_NO_WARNINGS
	
#include<stdio.h>
#include<conio.h>
#include<string.h>
//2015117800 �强��
void change2(char *str);
void change1(char *str);

int main(int argc, char *argv[])
{
	int n,i,len=0;
	char str[100];
	printf("%d %d %d %d\n", 'x','y','z','a');
	puts("1. ��ȣȭ");
	puts("2. ��ȣȭ");

	printf("\n�޴� ���� >> ");
	scanf("%d", &n);

	if (n == 1)
	{
		getchar();
		printf("\n���ڿ� �Է� >> ");
		gets(str);
		
		change1(str);
		printf("��ȣȭ�� ���ڿ� ��� >> ");
		printf("%s", str);

	}
	else if (n == 2)
	{
		getchar();
		printf("���ڿ� �Է� >> ");
		gets(str);

		change2(str);
		printf("\n��ȣȭ�� ���ڿ� ��� >> ");
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
