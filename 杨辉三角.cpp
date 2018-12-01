#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,sp;
	int a[n+1][n+1];
	for(i=1;i<=n;i++)
		a[i][1]=a[i][i]=1;
	for(i=3;i<=n;i++)
	{
		for(j=2;j<=i-1;j++)
		a[i][j]=a[i-1][j-1]+a[i-1][j];		
		
		}	
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=n-i;sp++)
			printf(" ");
		
		for(j=1;j<=i;j++)
		{
			printf("%4d",a[i][j]);
		}
		
		printf("\n");
		}	
 } 
