#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j,k;
	int ret=1;
	if(n==1)printf("%3d",1);
	else
	{
		for(k=0;k<n/2;k++)
		{
			for(i=k;i<=n-1-k;i++)
				a[k][i]=ret++;
				
			for(j=k+1;j<n-1-k;j++)
			a[j][n-1-k]=ret++;
			for(i=n-k-1;i>k;i--)
			a[n-k-1][i]=ret++;
			for(j=n-1-k;j>k;j--)
			a[j][k]=ret++;
			if(n%2==1)
			{
				a[(n-1)/2][(n-1)/2]=ret;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%3d",a[i][j]);
			}
			printf("\n");
		}
		
	}
	
}

