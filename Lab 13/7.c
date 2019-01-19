#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//2015117800 Àå¼º¿ø

typedef struct linked_list {
	int num;
	struct linked_list* next;

}NODE;

NODE * create(int n);
int main(void)
{
	NODE *n1, *n2, *n3, *copy, *pre;

	copy = (NODE*)malloc(sizeof(NODE));
	pre = (NODE*)malloc(sizeof(NODE));
	n1 = create(10);
	n2 = create(20);
	n3 = create(30);

	n1->next = n2;
	n2->next = n3;
	
	copy = n1;
	puts("[output]");

	while (n1)
	{
		printf("%d\n", n1->num);
		n1 = n1->next;
	}

	while (copy->next)
	{
		pre = copy;
		copy = copy->next;
		free(pre);
	}
	system("pause");
	return 0;
}

NODE * create(int n)
{
	NODE * ptr;
	ptr = (NODE*)malloc(sizeof(NODE));
	ptr->num = n;
	ptr->next = NULL;

	return ptr;
}