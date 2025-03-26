#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int N = 0, max = -1000000, min = 1000000, tmp = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &tmp);
		if (tmp > max)max = tmp;
		if (tmp < min)min = tmp;
	}
	printf("%d %d", min, max);
}