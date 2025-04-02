#include <stdio.h>
int main()
{
    int input1=0,input2=0;
    scanf("%d %d",&input1,&input2);
    int outLCM=1,outGCD=1,prime=2;
    while(input1!=1 || input2!=1)
    {
        int tmp1=input1%prime;
        int tmp2=input2%prime;
        
        if(tmp1!=0&&tmp2!=0) prime++;
		else
		{
			outLCM*=prime;
			if(tmp1==0&&tmp2!=0) input1/=prime;
			if(tmp2==0&&tmp1!=0) input2/=prime;
			if(tmp1==0&&tmp2==0) 
			{
				input1/=prime;
				input2/=prime;
				outGCD*=prime;
			}
		}
    }
    printf("%d\n%d",outGCD,outLCM);
}