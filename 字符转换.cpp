#include<stdio.h>
int main()
{
	char s[80];
	int i=0;
	while((s[i]=getchar())!='\n')
	i++;
	s[i]='\0';
	int b=0; 
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		b=b*10+s[i]-'0';
	}
	printf("%d",b);
}
