#include <stdio.h>
#include <stdlib.h>
int CompFunc(const int* _a, const int* _b)
{
	return *_a>*_b?1:-1;
}
int main()
{
	int input = 0;
	scanf("%d",&input);
	int* arr = malloc(sizeof(int)*input);
	//for(int i=0;i<input;i++) printf("%d ",arr[i]);
	
	for(int i=0;i<input;i++) scanf("%d",&arr[i]);
	//for(int i=0;i<input;i++) printf("%d ",arr[i]);
	
	qsort(arr,input,sizeof(int),CompFunc);
	for(int i=0;i<input;i++) printf("%d ",arr[i]);
}