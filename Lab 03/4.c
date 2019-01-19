#include<stdio.h>
//2015117800 장성원
int main(void)
{
	float a, b;
	int flag;
	//a = 키
	//b = 몸무게

	printf("키와 몸무게 입력(실수) :");
	scanf("%f %f", &a, &b);

	flag = (b <= ((a - 100) * 0.9)) ? printf("정상\n") : printf("비만\n");

	return 0;
}

