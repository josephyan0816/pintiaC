#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[1000]={0};
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int j;
	int count=b[0];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
					{
						b[i]++;
						
					}
				
			}
			
			int index;
	for(i=0;i<n;i++)
	{
		if(b[i]>count){
			
			count=b[i];
			index=i;
		}
			
		}
	printf("%d %d",a[index],count);		
} 
