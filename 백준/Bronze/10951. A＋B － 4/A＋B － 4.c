#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int A, B = 0;
	while (1)
	{
		if (scanf("%d %d", &A, &B) == EOF) break;
		printf("%d\n", A + B);
	}
}