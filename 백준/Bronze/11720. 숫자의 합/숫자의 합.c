#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count = 0, sum = 0;
	char* arrNumber = 0;
	scanf("%d", &count);
	arrNumber = (char*)malloc(sizeof(char) * count);
	scanf("%s", arrNumber);
	for (int i = 0; i < count; i++) sum += (int)arrNumber[i] - 48;
	printf("%d", sum);
}