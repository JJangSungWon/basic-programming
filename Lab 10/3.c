#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h> //strcmp
//2015117800 �强��

struct Person {
	char name[30]; // �̸�
	char num[30];  // ��ȭ��ȣ
};

int main(void)
{
	struct Person p[30]; //30����� �Է¹��� �� �ְ� ����.
	int count = 0,i;
	char str[30];
	char *delimiter = ",\t!";
	puts("[input] q�� ������ �Է��� ����˴ϴ�.");
	while (1)
	{
		scanf("%s", p[count].name); //�̸� 
		if (p[count].name[0] == 'q') {
			printf("�Է��� �����մϴ� .\n\n");
			break;
		}
		scanf("%s", p[count++].num); //��ȭ��ȣ
	}

	fflush(stdin);

	puts("�˻��� �̸��� �Է��Ͻÿ�:");
	scanf("%s",str);

	for (i = 0; i < count; i++)
	{
		if ((strcmp(str, p[i].name) == 0)) {
			puts("[output]");
			printf("%s�� ��ȭ��ȣ�� %s�Դϴ�", p[i].name, p[i].num);
			break;
		}
		else {
			
		}
	}

	return 0;
}

