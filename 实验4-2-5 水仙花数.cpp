#include<stdio.h>
#include<math.h>
int main()
{
	int sum;
	int i;
	int j;
	
	int N;
	int digit=0;
	scanf("%d",&N);
	//m=pow(10,N-1);
	//n=pow(10,N);
	int m=1;
	int n=1;
	for(int t=0;t<N-1;t++)
	{
		m=10*m; 
	}
	for(int t=0;t<N;t++)
	{
		n=10*n; 
	}
	
	for(i=m;i<n;i++)
	{
		j=i;
		sum=0;
		while(j!=0)
		{
			digit=j%10;
			j=j/10;
			int nd=digit;
			for(int k=0;k<N-1;k++) 
			{
				nd=nd*digit;
			}
			sum=sum+nd;
		}
		if(sum==i)printf("%d\n",i);
	}
 } 
