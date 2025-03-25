#pragma warning (disable:4996) 
#include <stdio.h>

int main()
{
	int sum = 0;
	int input = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &input);
		int square = input * input;
		sum += square;
	}

	int result = sum % 10;
	printf("%d", result);
}