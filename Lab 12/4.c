#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
#include<stdio.h>
#include<conio.h>

int main(void)
{
	char in[100];
	FILE *fp;
	int count = 1;
	char ch;
	printf("입력 파일명 입력 : ");
	scanf("%s", in);

	fp = fopen(in, "r");

	if (fp == NULL) {
		fprintf(stderr, "error\n");
		return 1; //비정상 종료
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == '\n')
			count++;
		if (count == 5)
			continue;
	
		fputc(ch, stdout);
		//__putch(ch);
	}
	
	fclose(fp);
	return 0;
}