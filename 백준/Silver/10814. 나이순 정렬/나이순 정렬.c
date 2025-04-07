#include <stdio.h>
#include <stdlib.h>
struct Data { int index; int age; char name[101]; };
int Compare(const struct Data* d1, const struct Data* d2)
{
	if(d1->age!=d2->age) return d1->age>d2->age?1:-1;
	return d1->index>d2->index?1:-1;
}
int main()
{
	int count = 0;
	scanf("%d", &count);
	struct Data* arr = malloc(sizeof(struct Data)*count);
	
	for(int i=0;i<count;i++) 
	{
		scanf("%d %s",&arr[i].age,arr[i].name);
		arr[i].index = i;
	}
	qsort(arr,count,sizeof(struct Data),Compare);
	for(int i=0;i<count;i++) printf("%d %s\n",arr[i].age,arr[i].name);
	
	free(arr);
}