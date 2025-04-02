#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int input=0;
        scanf("%d",&input);
        if(!input) break;
        
        int tmp=input, length=1;
        while((tmp/=10)!=0) length++;
        
        int* arr = (int*)malloc(sizeof(int)*length);
        int index=length;
        tmp=input;
        do arr[--index]=tmp%10;
        while((tmp/=10)!=0);
        
        int bNo=0;
        for(int i=0;i<length/2;i++)
            if(arr[i]!=arr[length-1-i])
                bNo=1;
        
        if(bNo) printf("no\n");
        else printf("yes\n");
    }
}