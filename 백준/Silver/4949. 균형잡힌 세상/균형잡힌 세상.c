#include <stdio.h>
#include <string.h>
int main()
{
	while(1)
	{
		char str[101] = "";
		int strLength = 0;
		char tmpLF = ' ';
		
		char stack[101] = "";
		int stackTopIndex = -1;
		int i = 0;
		
		scanf("%[^\n]",str);
		scanf("%c",&tmpLF);
		
		if(str[0]=='.') break;
		strLength = strlen(str);
		for(i=0;i<strLength;i++)
		{
			if(str[i]=='(' || str[i]=='[')
			{
				stack[++stackTopIndex] = str[i];
				//printf("\ndebug: stack..");
				//printf("%d",stackTopIndex);
				//for(int j=0;j<101;j++) printf("%c",stack[j]);
			}
			else if(str[i]==')')
			{
				if(stackTopIndex<0 || stack[stackTopIndex]!='(') break;
				stack[stackTopIndex--] = 0;
				//printf("\ndebug: stack..");
				//printf("%d",stackTopIndex);
				//for(int j=0;j<101;j++) printf("%c",stack[j]);
			}
			else if(str[i]==']')
			{
				if(stackTopIndex<0 ||stack[stackTopIndex]!='[') break;
				stack[stackTopIndex--] = 0;
				//printf("\ndebug: stack..");
				//printf("%d",stackTopIndex);
				//for(int j=0;j<101;j++) printf("%c",stack[j]);
			}
		}
		if(i==strLength && stackTopIndex<0) printf("yes\n");
		else printf("no\n");
	}
}