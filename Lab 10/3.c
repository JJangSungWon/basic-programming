#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h> //strcmp
//2015117800 장성원

struct Person {
	char name[30]; // 이름
	char num[30];  // 전화번호
};

int main(void)
{
	struct Person p[30]; //30명까지 입력받을 수 있게 가정.
	int count = 0,i;
	char str[30];
	char *delimiter = ",\t!";
	puts("[input] q를 누르면 입력이 종료됩니다.");
	while (1)
	{
		scanf("%s", p[count].name); //이름 
		if (p[count].name[0] == 'q') {
			printf("입력을 종료합니다 .\n\n");
			break;
		}
		scanf("%s", p[count++].num); //전화번호
	}

	fflush(stdin);

	puts("검색할 이름을 입력하시오:");
	scanf("%s",str);

	for (i = 0; i < count; i++)
	{
		if ((strcmp(str, p[i].name) == 0)) {
			puts("[output]");
			printf("%s의 전화번호는 %s입니다", p[i].name, p[i].num);
			break;
		}
		else {
			
		}
	}

	return 0;
}

