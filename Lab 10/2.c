#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//2015117800 장성원

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

	puts("[input] q누를때까지 입력받습니다");
	while (1)
	{
		scanf("%s", food[i].fname);

		if (food[i].fname[0] == 'q') {
			printf("입력을 종료합니다.\n");
			break;
		}

		scanf("%d", &food[i++].calories);

	}

	result = totalCalroies(food, i);

	puts("[output]");
	printf("총 %d칼로리입니다.", result);

	return 0;
}

int totalCalroies(Food ary[], int size)
{
	int i,sum=0;
	for (i = 0; i < size; i++)
		sum += ary[i].calories;

	return sum;
}