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
	i=0;			//������뽫i���³�ʼ����Ϊ�˱���������X����a[i]ʱi�Ĵ�С 
	while(a[i]<x&&i<n)
	i++;
	for(j=n-1;j>=i;j--)//����һ��Ҫע�⣬��һ��ʼ�ָ����ˣ�����Ҫ��β�Ϳ�ʼ���Ų��ᵼ�����ݱ����ǣ���i���ƶ����ס��������� 
		a[j+1]=a[j];
		a[i]=x;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
		}	
	}

