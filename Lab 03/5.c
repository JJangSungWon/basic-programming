#include<stdio.h>
//2015117800 �强��
int main(void)
{
	int num, n;
	int result1, result2, result3, result4;

	printf("���� �Է� >>>");
	scanf("%d", &num);

	printf("n �Է�(1~31) >> ");
	scanf("%d", &n);

	result1 = (num & ( 1 <<n-1)) ? 1 : 0;
	result2 = (num | (1<<(n-1)));
	result3 = (num & ~(1<<(n-1)));
	result4 = (num ^ (1<<(n-1)));

	printf("���� %d�� %d��° ��Ʈ�� %d�̴�\n", num, n, result1);
	printf("���� %d�� %d��° ��Ʈ�� 1�� ������ ���� %d�̴�\n", num, n, result2);
	printf("���� %d�� %d��° ��Ʈ�� 0���� ������ ���� %d�̴�\n", num, n, result3);
	printf("���� %d�� %d��° ��Ʈ�� �ݴ�� ������ ���� %d�̴�\n", num, n, result4);

	return 0;
}