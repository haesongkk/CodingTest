#include <stdio.h>
#include <stdlib.h>
int main()
{
    int inputCount=0,inputNumber=0;
    scanf("%d %d",&inputCount,&inputNumber);
    int* card = (int*)malloc(sizeof(int)*inputCount);
    for(int i=0;i<inputCount;i++)
		scanf("%d",&card[i]);
    int output=0;
    for(int i=0;i<inputCount-2;i++)
    {
        for(int j=i+1;j<inputCount-1;j++)
        {
            for(int k=j+1;k<inputCount;k++)
            {
                int sum=card[i]+card[j]+card[k];
                int curDiff=inputNumber-sum;
                if(sum<=inputNumber && sum>output) output=sum;
            }
        }
    }
    printf("%d",output);
}