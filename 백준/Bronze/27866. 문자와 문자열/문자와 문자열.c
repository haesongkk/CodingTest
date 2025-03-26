#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	char word[1000] = "";
	int i = 0;
	scanf("%s %d", word, &i);
	printf("%c", word[i-1]);
}