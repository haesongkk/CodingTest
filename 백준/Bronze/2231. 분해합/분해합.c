#include <stdio.h>
int main()
{
    int input=0,output=0;
    scanf("%d",&input);
    // abcdefg+0 <= input = abcdefg+a+b+c+d+e+f+g <= abcdefg+63
    // input-63 <= output <= input
    for(output=input-63;output<input;output++)
    {
		if(output<=0) continue;
        // output 추정 값 + 해당 값의 모든 자리수 = input
        int sum=output,tmp=output;
        do sum += tmp%10;
        while((tmp/=10)!=0);
        if(sum==input) break;
    }
    printf("%d",output==input?0:output);
}