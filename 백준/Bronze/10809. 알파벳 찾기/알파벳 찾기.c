#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	char word[101] = "";
	int alphaPos[26] = { 0, };
	for (int i = 0; i < 26; i++)
		alphaPos[i] = -1;
	scanf("%[a-z]", word);
	for (int i = 0; i < 101; i++)
	{
		if (word[i] == '\0') break;
		int alpha = word[i] - 'a';
		if (alphaPos[alpha] != -1) continue;
		alphaPos[alpha] = i;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", alphaPos[i]);
}