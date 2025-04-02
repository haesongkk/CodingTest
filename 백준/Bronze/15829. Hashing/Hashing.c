#include <stdio.h>
#include <stdlib.h>
int main()
{
	int inputLength=0;
	scanf("%d",&inputLength);
    char* inputString = (char*)malloc(sizeof(char)*inputLength);
	scanf("%s",inputString);
    
    unsigned long output=0;
    while(inputLength--!=0)
    {
		unsigned long hash = inputString[inputLength]-'a'+1;
        for(int i=0;i<inputLength;i++) 
			if((hash*=31)>1234567891)
				hash%=1234567891;
        if((output+=hash)>1234567891) output%=1234567891;
    }
    
    printf("%lu",output);
}