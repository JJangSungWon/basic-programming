#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define TOTAL_BIT 32
//2015117800 장성원 <3번문제>
int main(void)
{
	char c = 'k'; //예제와 동일하게 k로 가정하였습니다.
	char ch;
	int count = 1;

	printf("알파벳 소문자 하나를 추측해 보시오.\n");
	do {
		scanf("%c", &ch);

		if (ch > c) {
			printf("입력한 아스키 코드 값이 더 큽니다.\n");
			count++;
			getchar();
			continue;
		}
		else if (ch < c) {
			printf("입력한 문자의 아스키 코드 값이 더 작습니다\n");
			count++;
			getchar();
			continue;
		}
		fflush(stdin);
	} while (ch != c);

	printf("정답입니다! 시도횟수는 %d번!\n", count);

	system("pause");
	return 0;
}