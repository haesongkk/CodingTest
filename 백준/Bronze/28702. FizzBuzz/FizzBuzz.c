#include <stdio.h>
int main()
{
    char input[3][9];
	scanf("%s %s %s",input[0],input[1],input[2]);

	// 셋 중 하나는 어차피 숫자
	int numIndex=0;
	for(int i=0;i<3;i++)
		if('1'<=input[i][0]&&input[i][0]<='9')
			numIndex=i;
	// printf("%s is number, index : %d\n",input[numIndex], numIndex+1);
	
	int length=strlen(input[numIndex]);
	int number = 0;
	for(int i=0;i<length;i++)
	{
		int digit = input[numIndex][i]-'0';
		for(int j=1;j<length-i;j++)
			digit*=10;
		number+=digit;
		// printf("converting... : %d\n",number);
	}
	
	number += 3-numIndex;
	// printf("%d\n",number);
	
	int bFizz = number%3==0;
	int bBuzz = number%5==0;
	if(bFizz&&bBuzz) printf("FizzBuzz");
	if(!bFizz&&bBuzz) printf("Buzz");
	if(bFizz&&!bBuzz) printf("Fizz");
	if(!bFizz&&!bBuzz) printf("%d",number);
}