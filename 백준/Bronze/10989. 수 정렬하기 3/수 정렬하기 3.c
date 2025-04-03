#include <stdio.h>
#include <stdlib.h>
int main()
{
    int inCnt=0;
    scanf("%d",&inCnt);
    
    // 데이터의 범위가 크지 않고 유한할 때 좋은 계수 정렬...
    int arrCount[10000];
    memset(arrCount,0,sizeof(int)*10000);
    int inData=0;
    for(int i=0;i<inCnt;i++)
    {
        scanf("%d",&inData);
        arrCount[--inData]++;
    }
    
    for(int i=0;i<10000;i++)
        while(arrCount[i]--!=0)
            printf("%d\n",i+1);
}