#include<stdio.h>
//2015117800 장성원
int main(void)
{
	int n1, n2, n3;
	int max;

	printf("세 수 입력 :");
	scanf("%d %d %d", &n1, &n2, &n3);


	//n1과 n2 비교
	max = (n1 > n2) ? n1 : n2;

	max = (max > n3) ? max : n3;

	printf("가장 큰 수 : %d", max);

	return 0;
}
	