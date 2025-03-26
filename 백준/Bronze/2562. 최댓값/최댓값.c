#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int arrNum[9] = { 0, };
	int max = 0, index = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &arrNum[i]);
	for (int i = 0; i < 9; i++)
	{
		if (arrNum[i] > max)
		{
			max = arrNum[i];
			index = i + 1;
		}
	}
	printf("%d\n%d", max, index);
}