#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<string.h>

int main(void)
{
	char f_name[1000];
	char word[100];
	FILE *fp;
	int len,count=1,check=1;
	char ch;
	int i = 0;
	printf("�����̸� : ");
	scanf("%s", f_name);
	printf("�˻��� �ܾ� : ");
	scanf("%s", word);

	len = strlen(word); //�ܾ� ����


	fp = fopen(f_name, "r");

	if (fp == NULL) {
		fprintf(stderr, "error\n");
		return 1; //������ ����
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == '\n')
			count++;

		if (ch == word[i]) {
			for (i = 1; i < len; i++) {
				ch = fgetc(fp);
				if (ch == word[i]) {
					check++;
					continue;
				}
				if (ch == '\n') {
					count++;
					break;
				}
			}
			if (check == len)
			{
				puts("\n[output]");
				printf("%s\n", f_name);
				printf("line %d", count);
			}
		}
		i = 0;
		check = 1;
	
	}

	fclose(fp);
	return 0;

}