#include<stdio.h>
#include<string.h>
int main()
{
	char s[81];
	char max[81];
	int n;
	scanf("%d",&n);
	int i;
	gets(s);
	strcpy(max,s); 
	for(i=0;i<n;i++)
	{
		gets(s);
		if(strlen(s)>strlen(max))
			strcpy(max,s);
	}
	printf("The longest is: %s",max);
	
}
