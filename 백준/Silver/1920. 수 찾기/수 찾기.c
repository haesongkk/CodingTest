#include <stdio.h>
#include <stdlib.h>
int Compare(const int* a, const int* b)
{
	if(*a>*b) return 1;
	else if(*a<*b) return -1;
	else return 0;
}
int main()
{
	int size = 0;
	scanf("%d",&size);
	int* arr = malloc(sizeof(int)*size);
	for(int i=0;i<size;i++) scanf("%d",&arr[i]);
	int count = 0;
	scanf("%d",&count);
	qsort(arr, size, sizeof(int), Compare);
	for(int i=0;i<count;i++)
	{
		int tmp = 0;
		scanf("%d",&tmp);
		int* res = bsearch(&tmp, arr, size, sizeof(int),Compare);
		if(res) printf("1\n");
		else printf("0\n");
	}
	free(arr);
}