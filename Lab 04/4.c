#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强�� <4������>
//���� �ִ� ������ 2147483647 �� �� 10�ڸ���(�ּҵ� ��ģ������ 10�ڸ�) 11�ڸ��� �Է��ϸ� �ùٸ� ���� ������ �ʽ��ϴ�, 
int main(void)
{
	int n;
	int i;
	int div = 10;
	int sum = 0;
	int copy, max = 1;
	int result = 0;
	int flag = 0;
	printf("����1���� �Է��ϼ���.\n");
	scanf("%d", &n);

	if (n < 0)
		flag = 1; //negative number check

	copy = n;

	//�ڸ� �� ���ϱ�
	while (1) {
		result = n / div;
		if (result != 0) {
			n = n / 10;
			max++;
		}
		else
			break;
	}

	div = 1;
	for (i = 1; i < max; i++)
		div = div * 10;

	//printf("div = %d", div);
	for (i = 1; i <= max; i++) {
		sum += (copy / div);
		copy = copy % div;
		div = div / 10;
	}
	printf("�Է��� ���� �ڸ��� %d�̰�\n", max);
	printf("�� �ڸ����� ���� : %d�Դϴ�.\n", sum);

	system("pause");
	return 0;
}