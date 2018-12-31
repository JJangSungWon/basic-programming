#include<stdio.h>

//2015117800 Àå¼º¿ø
int main(void)
{
	int    i_n1 = 10;
	int    i_n2 = 0X18;
	double d_n1 = 3.14;
	double d_n2 = 17.1e-3;
	float  f_n1 = 3.14F;
	char   ch = 'A';

	printf("(1)      10 = %d\n", sizeof(10));
	printf("(2)    0X18 = %d\n", sizeof(0X18));
	printf("(3)    3.14 = %d\n", sizeof(3.14));
	printf("(4) 17.1e-3 = %d\n", sizeof(17.1e-3));
	printf("(5)   3.14F = %d\n", sizeof(3.14F));
	printf("(6)     'A' = %d\n", sizeof('A'));

	return 0;

}