#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int A=0,B=0,C=0;
	scanf("%d %d %d", &A, &B, &C);
	int result = A*B*C;
	int counter[10] = {0,};
	for(int i=0;i<9;i++)
	{
		int n = result%10;
		counter[n]++;
		result/=10;
		if(result==0) break;
	}
	for(int i=0;i<10;i++)
		printf("%d\n",counter[i]);
}