#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Compare(const char** _str1, const char** _str2)
{
	char* str1= *_str1;
	char* str2= *_str2;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	//printf("%s %d %s %d\n",str1,len1,str2,len2);
	
	if(len1!=len2) return len1>len2?1:-1;
	for(int i=0;i<len1;i++)
		if(str1[i]!=str2[i]) 
			return str1[i]>str2[i]?1:-1;
	return 0;
}
int main()
{
    int count=0;
	scanf("%d",&count);
	
	char** arrStr = (char**)malloc(sizeof(char*)*count); 
	for(int i=0;i<count;i++)
	{
		char str[51] = "";
		scanf("%s",str);
		
		int length = strlen(str);
		arrStr[i] = (char*)malloc(sizeof(char)*++length);
		strcpy(arrStr[i],str);
		//printf("%s\n", arrStr[i]);
	}
	qsort(arrStr,count,sizeof(char*),Compare);
	
	char tmp[50]="";
	for(int i=0;i<count;i++)
	{
		if(strcmp(tmp,arrStr[i])!=0)
		{
			strcpy(tmp,arrStr[i]);
			printf("%s\n",arrStr[i]);
		}
	}
}