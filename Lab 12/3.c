#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	FILE *fp1, *fp2;
	char in[100], out[100];
	//char *delimiter1 = "0123456789";
	char *delimiter2 = " ";
	char *ptoken;
	char str[300];
	int count = 1;
	double check = 0;
	char copy[100];
	int num;
	double sum = 0.0;
	printf("�Է� ���ϸ� : ");
	scanf("%s", in);
	printf("��� ���ϸ� : ");
	scanf("%s", out);

	fp1 = fopen(in, "r");
	fp2 = fopen(out, "w");

	while (!feof(fp1))
	{
		fgets(str, sizeof(str), fp1); //�� �� �Է�
		count++;
		ptoken = strtok(str, delimiter2);
		//fprintf(fp2, "%s", ptoken); //�̸� �Է�

		while (ptoken)
		{
			if (ptoken[0] >= '0' && ptoken[0] <= '9') //���ڸ� ��
			{
				strcpy(copy, ptoken);
				num = atoi(copy);
				sum += num;
				check++;
			}
			else
				fprintf(fp2, "%s ", ptoken); //���� �ƴϸ� �̸����� �ν� �ڿ� �����̽��� ���� �ذ�

			ptoken = strtok(NULL, delimiter2);
		}
		fprintf(fp2, "%.2f\n", sum/check);
		sum = 0;
		check = 0;
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}