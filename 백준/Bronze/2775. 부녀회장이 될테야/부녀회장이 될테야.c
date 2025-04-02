#include <stdio.h>
int main()
{
    int apart[15][15] = {0,};
    
    for(int i=0;i<15;i++)
        apart[0][i]=i;
    for(int i=0;i<15;i++)
        apart[i][0]=0;
    
    for(int flr=1;flr<15;flr++)
        for(int rm=1;rm<15;rm++)
            apart[flr][rm]=apart[flr-1][rm]+apart[flr][rm-1];
    
    int input=0;
    scanf("%d",&input);
    for(int i=0;i<input;i++)
    {
        int inFlr=0,inRm=0;
        scanf("%d %d",&inFlr,&inRm);
        printf("%d\n",apart[inFlr][inRm]);
    }
}