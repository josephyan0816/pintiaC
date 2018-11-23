#include<stdio.h>
int main()
{
	
	int n;
	int flag=0;
	scanf("%d",&n);
	int i,j;
	int l,h;
		int a[6][6];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int temp=0,y=0;
	if(n==1)printf("0 0");
	else
	{
	
		for(i=0;i<n;i++)
		{
		y=i;
		for(j=0;j<n;j++)
			{
				if(a[i][temp]<=a[i][j])
					{
						temp=j;
					}
			
				
			}
		for(int t=0;t<n;t++)
			{
				if(a[y][temp]>a[t][temp])
				{
					y=t;
					break;
				}
				
			}
			if(y==i){
				flag=1;	
				break;
			}	
		}
			if(flag==1)printf("%d %d",i,temp);	
		else printf("NONE");
	
	}
		

}
	
  
