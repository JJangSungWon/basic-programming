#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
#include<string.h>

//2015117800
int main(void)
{
	char ch;
	char str[100] = { '\0' }, copy[100] = { '\0' };
	int i = 0, flag = 1;;
	int len=0,len2=0,temp;
	//��й�
	
	while (1)
	{
		printf("��й�ȣ�� �Է��Ͻÿ�(�ּ� 5�ڸ�, �ִ� 10�ڸ�) ");
		while (1) {
			ch = _getch();
			if (ch == '\r')
				break;
			else {
				_putch('*');
				str[len++] = ch;
			}
		}

		len = strlen(str);
		if (len < 5 || len>10) {
			printf("\n����!!! ��й�ȣ�� ũ�Ⱑ Ʋ�Ƚ��ϴ�. �ٽ� �õ��ϼ���.\n");
			memset(str, 0, len);
			memset(copy, 0, len2);
			len = 0;
			len2 = 0;
			i = 0;
			continue;
		}

		i = 0;
		printf("\n��й�ȣ�� �ѹ� �� �Է��Ͻÿ�(�ּ� 5�ڸ�, �ִ� 10�ڸ�) :");
		while (1) {
			ch = _getch();
			if (ch == '\r')
				break;
			else {
				_putch('*');
				copy[len2++] = ch;
			}
		}

		if (len2 < 5 || len2>10) {
			printf("\n����!!! ��й�ȣ�� ũ�Ⱑ Ʋ�Ƚ��ϴ�. �ٽ� �õ��ϼ���.\n");
			memset(str, 0, len);
			memset(copy, 0, len2);
			i = 0;
			len = 0;
			len2 = 0;
			continue;
		}
		
		temp = len - len2;
	
		if (temp == 0 ) {
			for (i = 0; i < len; i++) {
				if (str[i] == copy[i])
					continue;
				else {
					printf("\n��ġ���� �ʽ��ϴ�. �ٽ� �õ��ϼ���.\n");
					memset(str, 0, len);
					memset(copy, 0, len2);
					flag = 0;
					len = 0;
					len2 = 0;
					break;
				}
			}
			if (flag) {
				puts("");
				fflush(stdin);
				printf("����� �Է��� ��й�ȣ�� %s �Դϴ�.\n", str);
				return 0;
			}
		}
		else {
			printf("\n��ġ���� �ʽ��ϴ�. �ٽ� �õ��ϼ���.\n");
			memset(str, 0, len);
			memset(copy, 0, len2);
			flag = 0;
			len = 0;
			len2 = 0;
		}
		flag = 1;
	}

	return 0;
}

