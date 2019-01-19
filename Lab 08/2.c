#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
#include<string.h>

//2015117800 장성원
int main(void)
{
	char str[100],len=0,i,j,len2;
	char *delimiter = " ";
	char str2[100][100];

	printf("한 줄의 문장을 입력하시오 : ");
	gets(str);

	char *ptoken = strtok(str, delimiter);
	while (ptoken)
	{
		strcpy(str2[len++], ptoken);
		ptoken = strtok(NULL, delimiter);
	}
	
	for (i = 0; i < len; i++)
	{
		len2 = strlen(str2[i]);
		for (j = (len2 - 1); j >= 0; j--)
			printf("%c", str2[i][j]);

		printf("\t");
	}

	return 0;

}