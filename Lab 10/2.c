#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 �强��

typedef struct
{
	char fname[100];
	int calories;
}Food;
int totalCalroies(Food ary[], int size);
int main(void)
{
	Food food[1000];
	int i = 0;
	int result = 0;

	puts("[input] q���������� �Է¹޽��ϴ�");
	while (1)
	{
		scanf("%s", food[i].fname);

		if (food[i].fname[0] == 'q') {
			printf("�Է��� �����մϴ�.\n");
			break;
		}

		scanf("%d", &food[i++].calories);

	}

	result = totalCalroies(food, i);

	puts("[output]");
	printf("�� %dĮ�θ��Դϴ�.", result);

	return 0;
}

int totalCalroies(Food ary[], int size)
{
	int i,sum=0;
	for (i = 0; i < size; i++)
		sum += ary[i].calories;

	return sum;
}