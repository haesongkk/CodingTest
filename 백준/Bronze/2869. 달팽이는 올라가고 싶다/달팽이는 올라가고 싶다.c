#include <stdio.h>
int main()
{
    int up=0,down=0,top=0;
    scanf("%d %d %d",&up,&down,&top);
    
    // height = up + (up-down)*(n-1)
    // height = (up-down)*n + down >= top 인 n을 구한다
    int a=top-down;
    int b=up-down;
    int n=a%b==0?a/b:a/b+1;
    printf("%d",n);
}