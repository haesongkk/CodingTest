#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int H = 0, M = 0;
	scanf("%d %d", &H, &M);
	M -= 45;
	if(M < 0)
	{
		M += 60;
		if(--H < 0) H += 24;
	}
	printf("%d %d", H, M);
}