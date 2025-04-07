#include <stdio.h>
#include <stdlib.h>
struct Data { int wgh; int hgh; int biggerCount; };
int main()
{
	int count = 0;
	scanf("%d",&count);
	struct Data* arr = malloc(sizeof(struct Data)*count);
	for(int i=0;i<count;i++) 
	{
		scanf("%d %d", &arr[i].wgh, &arr[i].hgh);
		arr[i].biggerCount = 0;
	}
	// for(int i=0;i<count;i++) printf("ID : %d, weight : %d, height : %d\n",i,arr[i].wgh,arr[i].hgh);
	
	for(int i=0;i<count;i++)
		for(int j=0;j<count;j++)
			if(arr[j].wgh>arr[i].wgh && arr[j].hgh>arr[i].hgh)
				arr[i].biggerCount++;
	
	// for(int i=0;i<count;i++) printf("%d,%d : %d\n",arr[i].wgh,arr[i].hgh,arr[i].biggerCount);
	
    for(int i=0;i<count;i++) printf("%d ",arr[i].biggerCount+1);
}