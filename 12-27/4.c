#include<stdio.h>
//2015117800 �强��
int main(void)
{
	float a, b;
	int flag;
	//a = Ű
	//b = ������

	printf("Ű�� ������ �Է�(�Ǽ�) :");
	scanf("%f %f", &a, &b);

	flag = (b <= ((a - 100) * 0.9)) ? printf("����\n") : printf("��\n");

	return 0;
}

