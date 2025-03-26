#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int bArr[42]={0,};
	int tmp=0, count=0;
	for(int i=0;i<10;i++) 
	{
		scanf("%d",&tmp);
		tmp %= 42;
		bArr[tmp] = 1;
	}
	for(int i=0;i<42;i++) 	
		if(bArr[i] == 1) count++;
	printf("%d", count);
}