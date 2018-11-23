	#include<stdio.h>
	int main()
	{
		
		int T;
		int n;
		int i,j,k;
		int a[10][10];
		scanf("%d",&T);
			int flag=1;
		for(i=1;i<=T;i++)
		{
			scanf("%d",&n);	
			
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					scanf("%d",&a[j][k]);
				}
			}
		
			
			for(j=1;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(j>k&&a[j][k]!=0)flag=0;
					flag=flag*1;
				}
			
			}
			if(flag==1)printf("YES\n");
			if(flag==0)printf("NO\n");
			
		}
		
	}

