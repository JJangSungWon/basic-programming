#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char in[100];
	char out[100];
	FILE *fp1, *fp2;
	char ch;

	printf("입력 파일명 입력 : ");
	scanf("%s", in);
	printf("출력 파일명 입력 : ");
	scanf("%s", out);

	fp1 = fopen(in, "r");
	fp2 = fopen(out, "w");

	if(fp1 == NULL || fp2 == NULL) {
		fprintf(stderr, "error\n");
		return 1; //비정상 종료
	}

	while ((ch = fgetc(fp1)) != EOF)
	{
		ch = toupper(ch);
		_putch(ch);
		fputc(ch, fp2);

	}

	fclose(fp1);
	fclose(fp2);
}