#include<stdio.h>

int main(void)
{
	int i;

	for(i=32;i<=126;i++){
		printf("%3d = %c\n", i, i);
	}
}