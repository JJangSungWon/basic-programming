#include<stdio.h>

#define PI 3.14
//2015117800 �强��
int main(void)
{
	float n;
	float V, S;

	printf("������ �Է�(�Ǽ���) : ");
	scanf("%f", &n);

	V = (float)4/3 * PI * (n * n * n);
	S = 4 * PI * (n * n);

	printf("�� ü��(V) : %f\n", V);
	printf("�� ǥ����(S) : %f\n", S);



	
}
