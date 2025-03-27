#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int R = 0;
		char buffer[160] = "";
		int buffercounter = 0;
		scanf("%d ", &R);
		while (1)
		{
			char c = ' ';
			scanf("%c", &c);
			if (c == '\n') break;
			for (int i = 0; i < R; i++)
				buffer[buffercounter++] = c;
		}
		for (int i = 0; i < buffercounter; i++)
			printf("%c", buffer[i]);
		printf("\n");
	}
}