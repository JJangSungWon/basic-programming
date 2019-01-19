#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

typedef struct {
	int hour;
	int min;
	int sec;
}TIME;

TIME elapsedTime(TIME start, TIME end);

int main(void)
{
	TIME time1, time2, result;
	puts("���۽ð��� ����ð��� �Է��Ͻÿ�:");
	scanf("%d:%d:%d", &time1.hour, &time1.min, &time1.sec);
	scanf("%d:%d:%d", &time2.hour, &time2.min, &time2.sec);

	result = elapsedTime(time1, time2);

	if(result.hour < 10)
		printf("����ð��� 0%d:%d:%d�Դϴ�", result.hour, result.min, result.sec);
	else
		printf("����ð��� %d:%d:%d�Դϴ�", result.hour, result.min, result.sec);
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