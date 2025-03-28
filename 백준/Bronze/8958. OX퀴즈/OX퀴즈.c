#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int caseCount = 0;
	scanf("%d", &caseCount);
	for (int i = 0; i < caseCount; i++)
	{
		char answer[80] = "";
		int total = 0;
		int get = 0;
		scanf("%s", answer);
		for (int j = 0; j < 80; j++)
		{
			if (answer[j] == 'O') get++;
			else if (answer[j] == 'X') get = 0;
			else break;
			total += get;
		}
		printf("%d\n", total);
	}
}