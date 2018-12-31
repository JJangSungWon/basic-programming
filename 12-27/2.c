#include<stdio.h>

#define PI 3.14
//2015117800 장성원
int main(void)
{
	float n;
	float V, S;

	printf("반지름 입력(실수형) : ");
	scanf("%f", &n);

	V = (float)4/3 * PI * (n * n * n);
	S = 4 * PI * (n * n);

	printf("구 체적(V) : %f\n", V);
	printf("구 표면적(S) : %f\n", S);



	
}
