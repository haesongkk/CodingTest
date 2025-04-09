#include <stdio.h>
int main()
{
	int input = 0, output = 0;
	scanf("%d",&input);
	int fiveCnt = input/5, threeCnt = 0;
	switch(input%5)
	{
		case 0: break;
		case 1: fiveCnt--; threeCnt = 2; break;
		case 2: fiveCnt -= 2; threeCnt = 4; break;
		case 3: threeCnt = 1; break;
		case 4: fiveCnt--; threeCnt = 3; break;
	}
	//printf("debug: five*%d, three*%d\n", fiveCnt, threeCnt);
	
	if(fiveCnt<0) printf("-1");
	else printf("%d", threeCnt+fiveCnt);
}