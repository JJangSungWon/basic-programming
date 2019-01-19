#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
#include<stdio.h>

int main(void)
{
	char in[100]; //입력 파일명
	char out[100]; //출력 파일명
	char ch;
	FILE *fp1, *fp2;
	printf("입력 파일명 : ");
	scanf("%s", in);
	printf("출력 파일명 : ");
	scanf("%s", out);

	fp1 = fopen(in, "r");
	fp2 = fopen(out, "w");

	if (fp1 == NULL || fp2 == NULL) {
		fprintf(stderr, "error\n");
		return 1; //비정상 종료
	}

	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
		if (ch == '\n')
			fputc('\n',fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}