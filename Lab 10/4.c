#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

typedef struct {
	int hour;
	int min;
	int sec;
}TIME;

TIME elapsedTime(TIME start, TIME end);

int main(void)
{
	TIME time1, time2, result;
	puts("시작시간과 종료시간을 입력하시오:");
	scanf("%d:%d:%d", &time1.hour, &time1.min, &time1.sec);
	scanf("%d:%d:%d", &time2.hour, &time2.min, &time2.sec);

	result = elapsedTime(time1, time2);

	if(result.hour < 10)
		printf("경과시간은 0%d:%d:%d입니다", result.hour, result.min, result.sec);
	else
		printf("경과시간은 %d:%d:%d입니다", result.hour, result.min, result.sec);
}
TIME elapsedTime(TIME start, TIME end)
{
	TIME SUM;
	int sum1, sum2, result;

	sum1 = (start.hour * 3600) + (start.min * 60) + (start.sec);
	

	sum2 = (end.hour * 3600) + (end.min * 60) + (end.sec);

	result = sum2 - sum1;

	SUM.hour = result / 3600;
	result = result % 3600;

	SUM.min = result / 60;
	result = result % 60;

	SUM.sec = result / 1;
	result = result % 1;

	return SUM;
}