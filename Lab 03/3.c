#include<stdio.h>
//2015117800 �强��
int main(void)
{
	int n1, n2, n3;
	int max;

	printf("�� �� �Է� :");
	scanf("%d %d %d", &n1, &n2, &n3);


	//n1�� n2 ��
	max = (n1 > n2) ? n1 : n2;

	max = (max > n3) ? max : n3;

	printf("���� ū �� : %d", max);

	return 0;
}
	