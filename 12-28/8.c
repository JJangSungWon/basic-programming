#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define TOTAL_BIT 32
//201511780 �强�� <8������>
int main(void)
{
	int n;
	int i;
	int accept = 0;
	int count = 0;
	int mask = 0xff;//0000  0000 0000 0000 0000 0000 1111 1111
	printf("�����Է� : ");
	scanf("%d", &n);

	//8 ��Ʈ�� �����ϱ� ���Ͽ� ���� 16��Ʈ�� 0���� �����.
	n = n & mask;

	puts("");

	//8��Ʈ ����
	printf("���� 8 bit = ");
	for (i = 7; i >= 0; i--) {
		printf("%d", (n >> i & 1));
		count++;

		if (count % 4 == 0)
			printf(" ");
	}

	count = 0;
	puts("");
	//8��Ʈ ����
	accept = accept | n;

	//left 4 bit move
	accept = accept << 4;

	printf("4bit move after : ");
	for (i = 31; i >= 0; i--) {
		printf("%d", (accept >> i & 1));
		count++;
		if (count % 4 == 0)
			printf(" ");
	}
	puts("");


	if (accept > 178)
		printf("������ 8��Ʈ�� �������� 4��Ʈ �̵��� ���� 178���� Ů�ϴ�\n");
	else if (accept == 178)
		printf("������ 8��Ʈ�� �������� 4��Ʈ �̵��� ���� 178�� �����ϴ�\n");
	else
		printf("������ 8��Ʈ�� �������� 4��Ʈ �̵��� ���� 178���� �۽��ϴ�\n");

	system("pause");
	return 0;
}