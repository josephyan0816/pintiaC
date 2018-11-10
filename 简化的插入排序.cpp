#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n); 
	int a[11];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	int x;
	int j;
	scanf("%d",&x);
	i=0;			//这里必须将i重新初始化，为了遍历数组找X大于a[i]时i的大小 
	while(a[i]<x&&i<n)
	i++;
	for(j=n-1;j>=i;j--)//这里一定要注意，我一开始又搞忘了，数组要从尾巴开始动才不会导致数据被覆盖，从i处移动会盖住后面的数据 
		a[j+1]=a[j];
		a[i]=x;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
		}	
	}

