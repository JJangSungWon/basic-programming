#define _CRT_SECURE_NO_WARNINGS
//2015117800 �强��, 1������
#include<stdio.h>
/*
	�������� �Ǽ��ڷ����� ���������� 10 10 10�� ����� 10.0000001��
	�����µ� ���⼭�� 10.0000000�� ���ɴϴ�
*/
int main(void)
{
	double grade = 0.0f;
	double sum = 0.0f;
	int n = 0;

	printf("�����Է��� ��ġ���� ������ �Է��Ͻÿ�.\n");
	printf("������ �Է��Ͻÿ�\n");

	n = n - 1;

	while (grade >= 0) {
		sum += grade;
		n++;
		scanf("%lf", &grade);
		if (grade < 0)//sentinel value negative check
			break;
	}

	if (n == 0) {
		printf("�Էµ� ������ �����ϴ�.\n");
	}
	else {
		printf("%d���� ����� %.7f�Դϴ�.\n", n, (double)sum / n);
	}
	system("pause");
	return 0;

}