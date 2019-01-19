#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct complex1 {
	double real;
	double imag;

};
struct complex1 n1, n2;

void print();
void input();
void add();//+
void minus();//-
void f_abs();//abs
void mul();//*
void input2();//abs input
void in();

int n;
int main(void)
{


	while (1)
	{
		puts(">>> 메뉴 <<<");
		print();

		in();

		if (n == 4)//abs
		{
			input2();
			f_abs();

		}

		if (n == 1)//+
		{
			input();
			add();
		}
		else if (n == 2)//-
		{

			input();
			minus();

		}
		else if (n == 3)//*
		{
			input();
			mul();
		}
		else if (n == 5)
		{
			printf("프로그램을 종료합니다.");
			return 0;
		}
		puts("");
	}

	return 0;

}

void print()
{
	puts("1. 덧셈");
	puts("2. 뺄셈");
	puts("3. 곱셈");
	puts("4. 절댓값");
	puts("5. 종료");
	printf("메뉴를 선택하시오 : ");
}

void input()//입력
{
	printf("\n첫 번째 복소수를 입력하시오 : ");
	scanf("%lf %lf", &n1.real, &n1.imag);
	printf("두 번째 복소수를 입력하시오 : ");
	scanf("%lf %lf", &n2.real, &n2.imag);
}

void input2()
{
	printf("\n첫 번째 복소수를 입력하시오 : ");
	scanf("%lf %lf", &n1.real, &n1.imag);
}
void add()
{
	printf("계산결과 : (%.2f %.2fi) + (%.2f %.2fi) = ( %.2f %.2fi)\n"
		, n1.real, n1.imag, n2.real, n2.imag, n1.real + n2.real, n1.imag + n2.imag);
}

void minus()
{
	printf("계산결과 : (%.2f %.2fi) - (%.2f %.2fi) = ( %.2f %.2fi)\n"
		, n1.real, n1.imag, n2.real, n2.imag, n1.real - n2.real, n1.imag - n2.imag);
}

void mul()
{
	double result, result2;
	result = (n1.real * n2.real) - (n1.imag * n2.imag);
	result2 = (n1.real * n2.imag) + (n1.imag * n2.real);
	printf("계산결과 : (%.2f %.2fi) * (%.2f %.2fi) = ( %.2f %.2fi)\n"
		, n1.real, n1.imag, n2.real, n2.imag, result, result2);
}

void f_abs()
{
	double result, result2, result3;
	result = n1.real * n1.real;
	result2 = n1.imag * n1.imag;
	result3 = sqrt(result + result2);

	printf("%.2lf %.2lfi의 절댓값 : %.2lf\n", n1.real, n1.imag, result3);
}

void in()
{
	scanf("%d", &n);
}