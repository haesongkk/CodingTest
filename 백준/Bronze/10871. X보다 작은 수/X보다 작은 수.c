#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int count, num, tmp = 0;
	scanf("%d", &count);
	scanf("%d", &num);
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &tmp);
		if (tmp < num) printf("%d ", tmp);
	}
}