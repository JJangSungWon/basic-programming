#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

struct Day
{
	int year;
	int month;
	int day;
};

int leap_year_check(int year);
struct Day Calcul(struct Day day);
int main(void)
{
	struct Day original, result;

	puts("[input] q를 입력하면 입력 종료.");

	while (1)
	{
		printf("날짜를 입력하세요 : ");
		scanf("%d.%d.%d", &original.year, &original.month, &original.day);

		if (original.year == 'q') {
			printf("입력을 종료합니다.\n");
			break;
		}

		puts("[output]");
		printf("입력 날짜 : %d.%d.%d\n", original.year, original.month, original.day);
		result = Calcul(original);
		printf("+1된 날짜 : %d.%d.%d.\n", result.year, result.month, result.day);

		puts("");
	}
}


int leap_year_check(int year) //윤년 확인
{
	printf("year = %d\n", year);
	if ((year % 400) == 0)
		return 1;

	if ((year % 4) == 0)
		if (year % 100)
			return 1;
	
	
	return 0;
}

struct Day Calcul(struct Day day)
{
	int check;

	check = leap_year_check(day.year);

	//2월
	if (day.month == 2) {
		if (check)//윤년
		{
				if (day.day == 29) {
					day.month = 3;
					day.day = 1;
					return day;
				}
				else {
					day.day++;
					return day;
				}
		}	
		else
		{
			if (day.day == 28) {
				day.month = 3;
				day.day = 1;
				return day;
			}
			else {
				day.day++;
				return day;
			}
		}
	}
	//31일 까지 있는 날.
	if (day.month == 1 || day.month == 3 || day.month == 5 || day.month == 7 || day.month == 8 || day.month == 10 || day.month == 12)
	{
		if (day.day == 31)
		{
			if (day.month == 12) {
				day.month = 1;
				day.day = 1;
				return day;
			}
			else {
				day.month++;
				day.day = 1;
				return day;
			}
		}
		else {
			day.day++;
			return day;
		}
	}
	else//30일 까지 있는 날 
	{
		if (day.day == 30)
		{
			day.month++;
			day.day = 1;
			return day;
		}
		else 
		{
			day.day++;
			return day;
		}
	}
}

// 1 31
// 3 31
// 4 30
// 5 31
// 6 30
// 7 31
// 8 31
// 9 30
//10 31
//11 30
//12 31
