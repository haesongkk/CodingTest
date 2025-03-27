#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* line = (char*)malloc(sizeof(char) * 1000000);
	int length = 0, i = 0;
	scanf("%[^\n]", line);
	while (line[i++] != '\0')
		length++;
	int count = 0, bWord = 0;
	for (int i = 0; i < length; i++)
	{
		if (line[i] == ' ') bWord = 0;
		else if (bWord == 0)
		{
			bWord = 1;
			count++;
		}
	}
	printf("%d", count);
	free(line);
}