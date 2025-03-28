#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 1 || num == 8)
	{
		int count = 0;
		for (count = 0; count < 6; count++)
		{
			int prevNum = num;
			scanf("%d", &num);
			if (prevNum + 1 != num && prevNum - 1 != num) break;
		}
		if (count == 6)
		{
			if (num == 7) printf("ascending");
			else if (num == 2) printf("descending");
			else printf("mixed");
			return 0;
		}
	}
	printf("mixed");
}