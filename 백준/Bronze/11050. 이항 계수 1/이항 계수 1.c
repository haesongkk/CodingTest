#include <stdio.h>
int main()
{
    int input1=0,input2=0;
    scanf("%d %d",&input1,&input2);
    int divisor=1,dividend=1;
    while(input2!=0)
    {
        dividend*=input1--;
        divisor*=input2--;
    }
    printf("%d",dividend/divisor);
}