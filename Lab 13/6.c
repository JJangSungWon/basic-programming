#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//2015117800 장성원

struct stu {
	int no;
	char name[20];
	double midterm;
	double final;
	double quiz;
};


int main(void)
{
	struct stu * ptr;

	int n;
	puts("[input]");
	printf("데이터의 개수를 입력하세요 :\n");
	scanf("%d", &n);

	ptr = (struct stu *)malloc(sizeof(struct stu) * n);

	puts("\n데이터를 입력하세요 (성명 점수1 점수2 퀴즈");
	for (int i = 0; i < n; i++)
	{
		printf("데이터 %d :", i + 1);
		scanf("%s %lf %lf %lf", ptr[i].name, &ptr[i].midterm, &ptr[i].final, &ptr[i].quiz);
	}

	puts("[output]");
	for (int i = 0; i < n; i++)
		printf("%d %s %.1f %.1f %.1f\n", i + 1, ptr[i].name, ptr[i].midterm, ptr[i].final, ptr[i].quiz);

	free(ptr);
	system("pause");
	return 0;
}