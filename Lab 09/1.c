#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
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
	printf("영화제목 : %s\n", movie1.title);
	printf("영화감독 : %s\n", movie1.act);
	printf("개봉연도 : %d\n", movie1.year);
	printf("상영시간 : %d분\n", movie1.time);

	puts("");
	//print 2
	printf("영화제목 : %s\n", movie2.title);
	printf("영화감독 : %s\n", movie2.act);
	printf("개봉연도 : %d\n", movie2.year);
	printf("상영시간 : %d분\n", movie2.time);

	return 0;
}