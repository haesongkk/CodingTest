#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 0;
	scanf("%d",&num);
	int* arr = malloc(sizeof(int)*num);
	memset(arr, 1, sizeof(int)*num);
	int count = num, cursor = 0;
	while(count!=1)
	{
		//printf("\ndebug: current valid array..");
		//for(int i=0;i<num;i++) 
		//	if(arr[i]) printf(" %d",i+1);
		while(cursor>=num) cursor-=num;
		if(!arr[cursor]) 
		{
			cursor++;
			continue;
		}
		if(arr[cursor])
		{
			arr[cursor]=0;
			count--;
			int move = 2;
			while(move!=0)
			{
				if(++cursor>=num) cursor-=num;
				if(arr[cursor]) move--;
				//printf("\ndebug: current cursor pos.. %d",cursor+1);
			}
		}	
	}
	for(int i=0;i<num;i++) 
		if(arr[i]) printf("%d\n",i+1);
	free(arr);
}