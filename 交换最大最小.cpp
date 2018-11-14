#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int temp;
	int min=a[0];
	int idxmin=0;
	for(i=0;i<n;i++)
	{
		if(min>=a[i])
		{
			min=a[i];
			idxmin=i;
		}
	}
	temp=a[0];
	a[0]=a[idxmin];
	a[idxmin]=temp;
	int idxmax=0;
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
			idxmax=i;
		}
	}
	temp=a[n-1];
	a[n-1]=a[idxmax];
	a[idxmax]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
