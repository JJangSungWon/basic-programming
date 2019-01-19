#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int a[4] = { 0, }, b[4] = { 0, }, cc[4] = { 0, }, d[4] = { 0, };
	char copy[4][100];
	char name[4][100];
	int i, j, len, len2 = 0, temp = 0;
	char str1[100], str2[100], str3[100], str4[100];
	char s_copy1[100], s_copy2[100], s_copy3[100], s_copy4[100];
	char *delimiter = " ";
	char *check = "0123456789";
	char c[100];
	int len3;
	char *ptoken1;

	printf("이름과 국어, 영어, 수학 성적을 입력하시오 :");
	gets(str1);

	printf("이름과 국어, 영어, 수학 성적을 입력하시오 :");
	gets(str2);

	printf("이름과 국어, 영어, 수학 성적을 입력하시오 :");
	gets(str3);

	printf("이름과 국어, 영어, 수학 성적을 입력하시오 :");
	gets(str4);

	//복사
	strcpy(s_copy1, str1);
	strcpy(s_copy2, str2);
	strcpy(s_copy3, str3);
	strcpy(s_copy4, str4);

	char *ptoken_1 = strtok(str1, check);
	char *ptoken_2 = strtok(str2, check);
	char *ptoken_3 = strtok(str3, check);
	char *ptoken_4 = strtok(str4, check);

	char *token1;
	char *token2;
	char *token3;
	char *token4;

	int flag1 = 0, flag2 = 0, flag3 = 0, temp1 = 0;
	strcpy(name[0], ptoken_1); //첫번째 이름

	token1 = strtok(s_copy1, delimiter);
	i = 0;
	while (token1)
	{
		if (token1[0] >= '0' && token1[0]<= '9') {
			a[i++] = atoi(token1);
		}
		token1 = strtok(NULL, delimiter);
	}
	
	strcpy(name[1], ptoken_2); //두번째 이름
	token2 = strtok(s_copy2, delimiter);
	i = 0;
	while (token2)
	{
		if (token2[0] >= '0' && token2[0] <= '9') {
			b[i++] = atoi(token2);
		}
		token2 = strtok(NULL, delimiter);
	}

	strcpy(name[2], ptoken_3); //세 번째
	token3 = strtok(s_copy3, delimiter);
	i = 0;
	while (token3)
	{
		if (token3[0] >= '0' && token3[0] <= '9') {
			cc[i++] = atoi(token3);
		}
		token3 = strtok(NULL, delimiter);
	}

	strcpy(name[3], ptoken_4); //4
	token4 = strtok(s_copy4, delimiter);
	i = 0;
	while (token4)
	{
		if (token4[0] >= '0' && token4[0] <= '9') {
			d[i++] = atoi(token4);
		}
		token4 = strtok(NULL, delimiter);
	}

	temp = 0;
	//이름 공백 없애기
	for (i = 0; i < 4; i++)
	{
		len = strlen(name[i]);
		for (j = 0; j < len; j++)
		{
			if (name[i][j] != ' ')
				copy[i][temp++] = name[i][j];
		}
		copy[i][temp] = '\0';
		strcpy(name[i], copy[i]);
		temp = 0;
	}

	puts("\n성적 입력 결과");

	printf("\t국어\t영어\t수학\n");
	
	printf("%s : %5d\t%5d\t%5d\t\n", name[0], a[0], a[1], a[2]);
	printf("%s : %5d\t%5d\t%5d\t\n", name[1], b[0], b[1], b[2]);
	printf("%s : %5d\t%5d\t%5d\t\n", name[2], cc[0], cc[1],cc[2]);
	printf("%s : %5d\t%5d\t%5d\t\n", name[3], d[0], d[1], d[2]);

}