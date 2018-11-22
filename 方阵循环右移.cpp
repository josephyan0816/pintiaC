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
				
	}	*/	//我一开始的下标用的（j+m）%n，这个是表示j列移动后的列数，而需要的打印的是j列是由哪个列数移动来的
	m=m%n;
	for(i=0;i<n;i++)
	{			//这题最后的空格要打出，注意题目要求，一开始我又想成末尾空格不输出了														
		for(j=0;j<n;j++)
		{
		//	if(j==0)printf("%d",a[i][(j+n-m)%n]);
				 printf("%d ",a[i][(j+n-m)%n]);
			
		}
		printf("\n");
	}
}
