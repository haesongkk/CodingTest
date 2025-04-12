#include <stdio.h>
int main()
{
	int count = 0;
	scanf("%d", &count);
	while(count--!=0)
	{
		char str[51] = "";
		char tmp = ' ';
		int n = 0;
		
		scanf(" %[^\n]",str);
		
		for(int i=0;i<51;i++)
		{
			if(!str[i]) break;
			if(str[i]=='(') n++;
			if(str[i]==')') n--;
			//printf("debug: count.. %d\n",n);
			if(n<0) break;
		}
		
		if(!n) printf("YES\n");
		else printf("NO\n");
	}
}