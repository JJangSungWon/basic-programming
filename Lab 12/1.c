#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>

int main(void)
{
	FILE *fp;
	char str[100];
	fp = fopen("data.txt", "r");

	if (fp == NULL) {
		fprintf(stderr, "error\n");
		return 1; //������ ����
	}

	fgets(str, sizeof(str), fp);
	while (!feof(fp))
	{
		printf("%s", str);
		fgets(str, sizeof(str), fp);
	}

	fclose(fp);
	return 0;
}
