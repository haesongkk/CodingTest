#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int count, A, B = 0;
	scanf("%d", &count);
	for(int i = 0; i < count; i++)
	{
		scanf("%d", &A);	
		scanf("%d", &B);
		printf("%d\n", A+B);
	}
}

