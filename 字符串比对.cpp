#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mycmp(char *s1,char *s2);
int main()
{
	int i,j;
	i=0;j=0;
	
	char s1[10000];
	char s2[10000];
	gets(s1);
	gets(s2);
	mycmp(s1,s2);	
	
 } 
 void mycmp(char *s1,char *s2)
 {
 	int idx=0;
 	int flag=0;
 	int count=0;//count表示的是遍历整个数组后是否找到了，单用flag如果再找到了之后又从后面开始没找到的话最后会输出-1
 	int len1,len2;
	 len1=strlen(s1);
 	len2=strlen(s2);
 	for(int i=0;i<len2;i++){
	 
 		for(int j=0;j<len1;j++)
 		{
 			if(s1[j]!=s2[i+j])
 			{
 				flag=0;
 				break;
			 }
			 else flag=1;
 		}
		 	if(flag==1)
 			{	count++;	
 				printf("%d ",i);
			 }
		 
 }
 	if(count==0)printf("-1");
 	
 }
