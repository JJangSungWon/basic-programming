#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//2015117800 장성원
//2017버전

typedef struct linked_list {
	char ch;
	struct linked_list* next;
}NODE;

NODE *createNode(char num);
void append(NODE* a, NODE* b);

int main(void)
{
	NODE *LINK, *copy, *pre;

	char  ch1;
	int flag = 1;
	int len = 0;
	puts("[input]");
	
	//copy = (NODE*)malloc(sizeof(NODE));
	LINK = (NODE*)malloc(sizeof(NODE));
	LINK->next = NULL;
	
	puts("ctrl + z 두번 입력 누르면 종료됩니다.");
	while ((scanf("%c", &ch1) != EOF))
	{
		copy = createNode(ch1);
		append(LINK, copy);
		getchar();
	}

	copy = LINK;
	pre = LINK;

	LINK = LINK->next;

	puts("[output]");
	while (LINK)
	{
		printf("%c -> ", LINK->ch);
		LINK = LINK->next;
	}
	printf(" null\n");

	while (copy->next)
	{
		pre = copy;
		copy = copy->next;
		free(pre);
	}

	system("pause");


	return 0;
}

NODE *createNode(char num)
{
	NODE * ptr;
	ptr = (NODE*)malloc(sizeof(NODE));
	ptr->ch = num;
	ptr->next = NULL;

	return ptr;
}

void append(NODE* a, NODE* b)
{
	if (a->next == NULL)
		a->next = b;
	else
		append(a->next, b);
}