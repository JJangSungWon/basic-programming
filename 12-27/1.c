#include<stdio.h>

//2015117800 �强��
#include<stdio.h>

int main(void)
{
	int n,copy;
	int num1, num2, num3, num4, num5;

	printf("���� õ�� ������ �ϳ��� ���� �Է� >>");
	scanf("%d", &n);

	copy = n;

	if(n >10000000){
		printf("õ�� ������ ������ �Է��Ͻÿ�");
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

		printf("�Է��� �� %d�� %d�� %dõ %d�� %d�� %d�Դϴ�.", n,num1,num2,num3,num4,num5);
	}
}