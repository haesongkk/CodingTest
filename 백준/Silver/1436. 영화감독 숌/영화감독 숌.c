#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int input = 0;
	scanf("%d",&input);
	
	int* arrNum = calloc(2666800, sizeof(int));
	int index = 0;
	for(int i=0;i<2666800;i++)
	{
		int tmp = i, length = 1;
		while((tmp/=10)!=0) length++;

		char* strNum = (char*)malloc(sizeof(char)*++length);
		tmp = i;
		strNum[--length] = '\0';
		do strNum[--length] = tmp%10 + '0';
		while((tmp/=10)!=0);
			
		if(strstr(strNum,"666")) arrNum[index++] = i;
		free(strNum);
	}
	
	printf("%d", arrNum[--input]);
	
	free(arrNum);
		
}