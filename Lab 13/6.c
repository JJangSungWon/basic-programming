#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//2015117800 �强��

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
	printf("�������� ������ �Է��ϼ��� :\n");
	scanf("%d", &n);

	ptr = (struct stu *)malloc(sizeof(struct stu) * n);

	puts("\n�����͸� �Է��ϼ��� (���� ����1 ����2 ����");
	for (int i = 0; i < n; i++)
	{
		printf("������ %d :", i + 1);
		scanf("%s %lf %lf %lf", ptr[i].name, &ptr[i].midterm, &ptr[i].final, &ptr[i].quiz);
	}

	puts("[output]");
	for (int i = 0; i < n; i++)
		printf("%d %s %.1f %.1f %.1f\n", i + 1, ptr[i].name, ptr[i].midterm, ptr[i].final, ptr[i].quiz);

	free(ptr);
	system("pause");
	return 0;
}