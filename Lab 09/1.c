#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct MovieData
{
	char title[100];
	char act[100];
	int year;
	int time;
};

int main(void)
{
	char title1[100] = "War of the Worlds";
	char act1[100] = "Byron Haskin";
	char act2[100] = "Stephen Spielberg";
	
	struct MovieData movie1 , movie2;

	//movie1
	strcpy(movie1.title, title1);
	strcpy(movie1.act, act1);
	movie1.year = 1953;
	movie1.time = 88;

	//movie2
	strcpy(movie2.title, title1);
	strcpy(movie2.act, act2);
	movie2.year = 2005;
	movie2.time = 118;

	//print 1
	printf("��ȭ���� : %s\n", movie1.title);
	printf("��ȭ���� : %s\n", movie1.act);
	printf("�������� : %d\n", movie1.year);
	printf("�󿵽ð� : %d��\n", movie1.time);

	puts("");
	//print 2
	printf("��ȭ���� : %s\n", movie2.title);
	printf("��ȭ���� : %s\n", movie2.act);
	printf("�������� : %d\n", movie2.year);
	printf("�󿵽ð� : %d��\n", movie2.time);

	return 0;
}