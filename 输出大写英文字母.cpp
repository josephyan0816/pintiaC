#include<stdio.h>
int main()
{
	char s[80];
	int i;
	i=0;
	while((s[i]=getchar())!='\n')
		i++;
		s[i]='\0';
	int len=i-1;
	int j; 
	char s2[80];
	int count=0;
	for(i=0;i<len;i++)
		s2[i]=s[i];
		
		s2[i]='\0';
	for(i=0;s[i]!='\0';i++)	
		{
			int flag=0;
			if(s[i]>='A'&&s[i]<='Z')
			{
				
				for(int j=0;j<len;j++)
				{
					if(s[i]==s2[j])
					{
						flag=1;
					}
				}
				if(flag==0){
					printf("%c",s[i]);
					count++;
				}
				
			}
			
		}
	if(count==0)printf("Not Found");	
 } 
