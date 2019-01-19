#include<stdio.h>

//2015117800 장성원
#include<stdio.h>

int main(void)
{
	int n,copy;
	int num1, num2, num3, num4, num5;

	printf("정수 천만 이하의 하나의 수를 입력 >>");
	scanf("%d", &n);

	copy = n;

	if(n >10000000){
		printf("천만 이하의 정수를 입력하시오");
	}
	else{
		num1 = n / 10000;
		n = n - (10000 * num1);

		num2 = n / 1000;
		n = n - (1000 * num2);

		num3 = n / 100;
		n = n - (100 * num3);

		num4 = n / 10;
		n = n - (10 * num4);

		num5 = n / 1;
		
		n = copy;

		printf("입력한 수 %d는 %d만 %d천 %d백 %d십 %d입니다.", n,num1,num2,num3,num4,num5);
	}
}