#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//2015117800 �强��
int* buildArray();
int findMin(int *arr, int n);
int n;
int main(void)
{
	int *arr;
	int min;
	arr = buildArray();
	min = findMin(arr,n);

	puts("\n");
	puts("[output]");
	printf("�迭���� �ּ� ���� %d �Դϴ�.\n", min);

	free(arr);
	system("pause");
	return 0;
}

int* buildArray()
{
	int  i;
	int *arr;

	puts("[input]");
	puts("�迭�� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &n);

	puts("");

	arr = (int *)malloc(sizeof(int) * n);

	puts("�����͸� �Է��ϼ���.");
	for (i = 0; i < n; i++)
	{
		printf("������ %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

int findMin(int *arr, int n)
{
	int min = *arr;
	int size = n;
	for (int i = 0; i < size; i++)
		if (min > arr[i])
			min = arr[i];

	return min;
}