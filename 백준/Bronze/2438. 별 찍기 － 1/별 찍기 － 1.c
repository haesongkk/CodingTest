#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int input = 0;
	scanf("%d", &input);
	for (int line = 1; line <= input; line++)
	{
		for (int star = 0; star < line; star++)
		{
			printf("*");
		}
		printf("\n");
	}
}