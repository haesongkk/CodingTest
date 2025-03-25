#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int A, B = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	printf("%d\n%d\n%d\n%d\n%d", A+B, A-B, A*B, A/B, A%B);
}