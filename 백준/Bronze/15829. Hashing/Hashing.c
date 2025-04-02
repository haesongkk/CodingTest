#include <stdio.h>
#include <stdlib.h>
int main()
{
	int inputLength=0;
	scanf("%d",&inputLength);
    char* inputString = (char*)malloc(sizeof(char)*inputLength);
	scanf("%s",inputString);
    
    int output=0;
    while(inputLength--!=0)
    {
		int hash = inputString[inputLength]-'a'+1;
        for(int i=0;i<inputLength;i++) hash*=31;
        output += hash;
    }
    
    printf("%d",output);
}