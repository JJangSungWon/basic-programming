#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define TOTAL_BIT 32
//201511780 장성원 <8번문제>
int main(void)
{
	int n;
	int i;
	int accept = 0;
	int count = 0;
	int mask = 0xff;//0000  0000 0000 0000 0000 0000 1111 1111
	printf("정수입력 : ");
	scanf("%d", &n);

	//8 비트만 추출하기 위하여 앞의 16비트를 0으로 만든다.
	n = n & mask;

	puts("");

	//8비트 추출
	printf("하위 8 bit = ");
	for (i = 7; i >= 0; i--) {
		printf("%d", (n >> i & 1));
		count++;

		if (count % 4 == 0)
			printf(" ");
	}

	count = 0;
	puts("");
	//8비트 대입
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
		printf("최하위 8비트를 왼쪽으로 4비트 이동한 값이 178보다 큽니다\n");
	else if (accept == 178)
		printf("최하위 8비트를 왼쪽으로 4비트 이동한 값이 178과 같습니다\n");
	else
		printf("최하위 8비트를 왼쪽으로 4비트 이동한 값이 178보다 작습니다\n");

	system("pause");
	return 0;
}