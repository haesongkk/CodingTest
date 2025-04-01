#include <stdio.h>
int main()
{
    int input=0,output=0;
    scanf("%d",&input);
	// 입력값 1인 경우 예외 처리
	if(input--==1)
	{
		printf("1");
		return 0;
	}
    // input -6 -12 -18 ... -> 몇바퀴에 있는지 판단
    while((input-=6*++output)>0);
    printf("%d",output+1);
}