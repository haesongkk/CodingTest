#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int A, B = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	double output = (double)A / B;
	printf("%.16f", output);
}