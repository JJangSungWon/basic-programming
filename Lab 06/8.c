#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//2015117800 �强��

int main(void)
{
	char code1[] = "JMARTYVWBDLONCXGZEKIPUFOHS";
	char code2[] = "abcdefghijklmnopqrstuvwxyz";
	int len;
	char ch[1000] = { 0, };
	int i;
	int len1, len2;
	printf("�Է¹��ڿ� : ");
	gets(ch);//space������ gets����Ͽ����ϴ�.

	len = strlen(ch);


	//�ؿ� �ܼ� �񱳷� Ǯ���µ� �̷��� Ǯ� �� �� ���Ƽ� �ּ����� �ϴ� ���׽��ϴ�!
	/*
	len2 = strlen(code1);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (c[i] != code1[j])
				continue;
			else if (c[i] == code1[j]) {
				c[i] = code2[j];
				break;
			}
		}
	}
	puts(ch);*/


	for (i = 0; i < len; i++) {
		if (ch[i] == 'J')
			ch[i] = 'a';
		else if (ch[i] == 'M')
			ch[i] = 'b';
		else if (ch[i] == 'A')
			ch[i] = 'c';
		else if (ch[i] == 'R')
			ch[i] = 'd';
		else if (ch[i] == 'T')
			ch[i] = 'e';
		else if (ch[i] == 'Y')
			ch[i] = 'f';
		else if (ch[i] == 'V')
			ch[i] = 'g';
		else if (ch[i] == 'W')
			ch[i] = 'h';
		else if (ch[i] == 'B')
			ch[i] = 'i';
		else if (ch[i] == 'D')
			ch[i] = 'j';
		else if (ch[i] == 'L')
			ch[i] = 'k';
		else if (ch[i] == 'Q')
			ch[i] = 'l';
		else if (ch[i] == 'N')
			ch[i] = 'm';
		else if (ch[i] == 'C')
			ch[i] = 'n';
		else if (ch[i] == 'X')
			ch[i] = 'o';
		else if (ch[i] == 'G')
			ch[i] = 'p';
		else if (ch[i] == 'Z')
			ch[i] = 'q';
		else if (ch[i] == 'E')
			ch[i] = 'r';
		else if (ch[i] == 'K')
			ch[i] = 's';
		else if (ch[i] == 'I')
			ch[i] = 't';
		else if (ch[i] == 'P')
			ch[i] = 'u';
		else if (ch[i] == 'U')
			ch[i] = 'v';
		else if (ch[i] == 'F')
			ch[i] = 'w';
		else if (ch[i] == 'O')
			ch[i] = 'x';
		else if (ch[i] == 'H')
			ch[i] = 'y';
		else if (ch[i] == 'S')
			ch[i] = 'z';
	}

	printf("��¹��ڿ� : %s", ch);
	return 0;
}