#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct math {
	int a;
	int b;
};

int output(struct math num1, struct math num2);

int main(void)
{
	struct math n1, n2;
	
	char str1[10];
	char str2[10];
	int num1[2], num2[2],i=0;

	char *delimiter = "/";
	
	char copy[10];

	puts("[input]");
	gets(str1);
	gets(str2);

	char *ptoken = strtok(str1, delimiter);
	//ù ��° ���� �̱�

	while (ptoken)
	{
		strcpy(copy, ptoken);
		num1[i++] = atoi(copy);
		ptoken = strtok(NULL, delimiter);
	}

	//����ü ����
	n1.a = num1[0];
	n1.b = num1[1];

	i = 0;
	char *ptoken2 = strtok(str2, delimiter);
	//�� ��°
	while (ptoken2)
	{
		strcpy(copy, ptoken2);
		num2[i++] = atoi(copy);
		ptoken2 = strtok(NULL, delimiter);
	}

	//����ü ����
	n2.a = num2[0];
	n2.b = num2[1];

	puts("[output]");
	printf("%d", output(n1, n2));
}

int output(struct math num1, struct math num2)//ũ�� ��
{
	double result1, result2;

	result1 = (double)num1.a / num1.b;
	result2 = (double)num2.a / num2.b;

	if (result1 > result2)//ù�� ° �м��� ũ��
		return -1;
	else if (result1 == result2)//����
		return 0;
	else
		return 1;
}
