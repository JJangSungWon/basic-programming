#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 Àå¼º¿ø

struct Money {
	int n1;//50000
	int n2;//10000
	int n3;//5000
	int n4;//1000
	int n5;//500
	int n6;//100
	int	n7;//50
	int n8;//10
	int n9;//1
};

struct Money money;
struct Money count(int m);
int main(void)
{
	struct Money Money;
	int m;

	puts("[input]");
	scanf("%d", &m); //input

	Money = count(m);
	
	puts("\n[output]");
	printf("50,000 : %10d\n", Money.n1);
	printf("10,000 : %10d\n", Money.n2);
	printf(" 5,000 : %10d\n", Money.n3);
	printf(" 1,000 : %10d\n", Money.n4);
	printf("   500 : %10d\n", Money.n5);
	printf("   100 : %10d\n", Money.n6);
	printf("    50 : %10d\n", Money.n7);
	printf("    10 : %10d\n", Money.n8);
	printf("     1 : %10d\n", Money.n9);

	return 0;
}

struct Money count(int m)
{
	struct Money money;

	int count = 0;
	
	count = m / 50000;
	money.n1 = count;
	count = 0;
	m = m % 50000;

	count = m / 10000;
	money.n2 = count;
	count = 0;
	m = m % 10000;

	count = m / 5000;
	money.n3 = count;
	count = 0;
	m = m % 5000;

	count = m / 1000;
	money.n4 = count;
	count = 0;
	m = m % 1000;

	count = m / 500;
	money.n5 = count;
	count = 0;
	m = m % 500;

	count = m / 100;
	money.n6 = count;
	count = 0;
	m = m % 100;

	count = m / 50;
	money.n7 = count;
	count = 0;
	m = m % 50;

	count = m / 10;
	money.n8 = count;
	count = 0;
	m = m % 10;

	count = m / 1;
	money.n9 = count;
	count = 0;

	return money;
}