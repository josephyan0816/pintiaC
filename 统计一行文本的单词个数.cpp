#include<stdio.h>
#include<string.h>
int main(){
	char s[80];
	gets(s);
	int cnt=0;
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]!=' ')
			{
			
			cnt++;
			while(s[i]!=' ')
			{
			
				if(s[i]=='\0')break;
					i++;		
			}
			
			
			}
		 i++;			
		
	}

	 printf("%d",cnt);
}
