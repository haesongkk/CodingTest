#include <stdio.h>
int main()
{
	// 0 0 0 을 입력 받을 때까지 세 변의 길이를 받아서 저장한다
	while (1)
	{
		int a = 0, b = 0, c = 0;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0) break;
		// 각 길이를 모두 제곱한다
		a *= a;
		b *= b;
		c *= c;
		// 피타고라스 정리
		if (a + b == c || b + c == a || c + a == b) printf("right\n");
		else printf("wrong\n");
	}
}