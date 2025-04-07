#include <stdio.h>
int main()
{
	int input = 0;
	scanf("%d",&input);
	int countTwo = 0, countFive = 0;
	do
	{
		if(!input) break;
		int number = input;
		while(number%2==0)
		{
			number/=2;
			countTwo++;
		}
		while(number%5==0)
		{
			number/=5;
			countFive++;
		}
		// printf("%d : %d, %d\n",input,countTwo,countFive);
	}
	while(--input!=0);
	printf("%d",countTwo>countFive?countFive:countTwo);
}