#define _CRT_SECURE_NO_WARNINGS
//2015117800 장성원, 1번문제
#include<stdio.h>
/*
	예제에는 실수자료형의 오차때문에 10 10 10의 평균이 10.0000001이
	나오는데 여기서는 10.0000000이 나옵니다
*/
int main(void)
{
	double grade = 0.0f;
	double sum = 0.0f;
	int n = 0;

	printf("성적입력을 마치려면 음수를 입력하시오.\n");
	printf("성적을 입력하시오\n");

	n = n - 1;

	while (grade >= 0) {
		sum += grade;
		n++;
		scanf("%lf", &grade);
		if (grade < 0)//sentinel value negative check
			break;
	}

	if (n == 0) {
		printf("입력된 성적이 없습니다.\n");
	}
	else {
		printf("%d명의 평균은 %.7f입니다.\n", n, (double)sum / n);
	}
	system("pause");
	return 0;

}