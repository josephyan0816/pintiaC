#include<stdio.h>
#include<string.h>
#define n 5
#define maxlen 81
void stringsort(char s[][maxlen],int N);
int main()
{
	int i;
	char s[n][maxlen];
	for(i=0;i<n;i++)
		scanf("%s",&s[i]);		//scanf���ַ������ո������gets���س����� 
	stringsort(s,n);
	printf("After sorted:\n");
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
}
void stringsort(char s[][maxlen],int N)
{
	char temp[maxlen];
	int i,j;
	for(i=1;i<n;i++)
	{
		
		for(j=0;j<n-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);	//strcpy�ܸ���ǰһ������������ 
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	
}
