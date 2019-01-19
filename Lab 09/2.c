#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
	char name[30]; //이름
	char address[100]; //주소
};

struct employee {
	struct person p;
	int num; //사번
	int pay; //월급
	double in; //인센티브는 double형
};



int main(void)
{
	struct employee mem[4];
	int i;
	double year_pay[4];
	char name1[10] = "김지혜", name2[10] = "김자경", name3[10] = "강동구", name4[10] = "안태용";
	char address1[30] = "서울시 구로구 고척동";
	char address2[30] = "경기도 안양시 비산동";
	char address3[30] = "인천광역시 간석동";
	char address4[30] = "경기도 일산시 화곡동";

	//1
	mem[0].num = 20123478;
	strcpy(mem[0].p.name, name1);
	strcpy(mem[0].p.address, address1);
	mem[0].pay = 1200000;
	mem[0].in = 120.0; //double형으로 입력.

	//2
	mem[1].num = 20123479;
	strcpy(mem[1].p.name, name2);
	strcpy(mem[1].p.address, address2);
	mem[1].pay = 1500000;
	mem[1].in = 150.0;//double형으로 입력.

	//3
	mem[2].num = 20123480;
	strcpy(mem[2].p.name, name3);
	strcpy(mem[2].p.address, address3);
	mem[2].pay = 1800000;
	mem[2].in = 180.0;//double형으로 입력.

	//4
	mem[3].num = 20123481;
	strcpy(mem[3].p.name, name4);
	strcpy(mem[3].p.address, address4);
	mem[3].pay = 2200000;
	mem[3].in = 250.0;//double형으로 입력.




	//연봉계산
	for (i = 0; i < 4; i++)
		year_pay[i] = mem[i].pay * (12 + (0.01 * mem[i].in));

	//print
	printf("  사 번\t   이 름\t주 소\t\t    월 급   인센티브\t 연봉\n");
	for (i = 0; i < 4; i++)
	{
		printf("%8d   %3s   %-20s   %7d   %5.0f%%   %10.1f\n", mem[i].num, mem[i].p.name, mem[i].p.address, mem[i].pay, mem[i].in, year_pay[i]);
	}

	return 0;
}