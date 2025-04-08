#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int line = 0, length = 0;
	scanf("%d %d", &line, &length);
	char** boardArr = malloc(sizeof(char*)*line);
	for(int i=0;i<line;i++) 
	{
		boardArr[i] = malloc(sizeof(char)*length);
		scanf("%s",boardArr[i]);
		//printf("debug: process line%d.. %s\n",i,boardArr[i]);
	}
	int minRepaint=2500;
	char chessArr[64] = "";
	char compArr[] = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
	
	for(int i=0;i<line-7;i++)
	{
		for(int j=0;j<length-7;j++)
		{
			for(int k=0;k<8;k++) 
				memcpy(chessArr+k*sizeof(char)*8,
					&boardArr[i+k][j],
					sizeof(char)*8);
			//printf("debug: when %d,%d is Left Top\n%s\n",i,j,chessArr);
			
			int repaint = 0;
			for(int k=0;k<64;k++) 
				if(chessArr[k]!=compArr[k]) repaint++;
			
			if(repaint<minRepaint) minRepaint=repaint;
			if(64-repaint<minRepaint) minRepaint=64-repaint;
			//printf("debug: compare with BW... %d\n",repaint1);
			//printf("debug: compare with WB... %d\n",repaint2);
			//printf("debug: result... %d\n",minRepaint);
		}
	}
	printf("%d",minRepaint);
	
	for(int i=0;i<line;i++) free(boardArr[i]);
	free(boardArr);
}