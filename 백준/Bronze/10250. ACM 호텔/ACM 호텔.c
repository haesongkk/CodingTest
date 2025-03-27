#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int H = 0, W = 0, N = 0;
		scanf("%d %d %d", &H, &W, &N);
		N--;
		int floor = N % H;
		int room = N / H;
		floor++;
		room++;
		if (room < 10) printf("%d0%d\n", floor, room);
		else printf("%d%d\n", floor, room);
	}
}