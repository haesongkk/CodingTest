#include <stdio.h>
#include <stdlib.h>
struct Point { int x; int y; };
int Compare(const struct Point* p1, const struct Point* p2)
{
	if(p1->y!=p2->y) return p1->y>p2->y?1:-1;
	return p1->x>p2->x?1:-1;
}
int main()
{
	int count = 0;
	scanf("%d", &count);
	struct Point* arr = malloc(sizeof(struct Point)*count);
	
	for(int i=0;i<count;i++) scanf("%d %d",&arr[i].x,&arr[i].y);
	qsort(arr,count,sizeof(struct Point),Compare);
	for(int i=0;i<count;i++) printf("%d %d\n",arr[i].x,arr[i].y);
	
	free(arr);
}