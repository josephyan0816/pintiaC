#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[n][n];
	int i;
	int j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=a[i][(j+m)%n];
			
			
		}
				
	}	*/	
	m=m%n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		//	if(j==0)printf("%d",a[i][(j+n-m)%n]);
				 printf("%d ",a[i][(j+n-m)%n]);
			
		}
		printf("\n");
	}
}
