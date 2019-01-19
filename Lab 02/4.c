#include<stdio.h>

//2015117800 장성원
#define SQ2(x) ((x) * (x))
#define SQ4(x) ((SQ2(x) * SQ2(x)))
int main(void)
{
	float n;

	printf("x의 값을 실수로 입력하시오 :");
	scanf("%f", &n);
	printf("x의 제곱은 %.1f입니다\n", SQ2(n));
	printf("x의 네제곱은 %.1f입니다\n", SQ4(n));

	return 0;
}