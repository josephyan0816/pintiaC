#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int b[10]={0};
	int digit;
	for(i=0;i<n;i++)
	{
		while(a[i]!=0)
		{
			digit=a[i]%10;
			b[digit]++;
			a[i]=a[i]/10;
		}
		
	}
	int max=b[0];
	for(i=0;i<10;i++)
	{
		if(max<b[i])max=b[i];
	}
	printf("%d:",max);
	for(i=0;i<10;i++)
	{
		if(max==b[i])
			printf(" %d",i);
	}
}
