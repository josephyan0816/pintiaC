#include<stdio.h>
struct information{
	char name[11];
	int birth;
	char phone[18];
};
int main()
{
	
	int n;
	scanf("%d",&n);
	struct information f[n];
	struct information temp;
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%s",&f[i].name,&f[i].birth,&f[i].phone);
	}
	int j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			temp=f[j];
			f[j]=f[j+1];
			f[j+1]=temp;
		}
	}
		
	for(i=0;i<n;i++)
	{
		printf("%s %d %s\n",f[i].name,f[i].birth,f[i].phone);
	 } 
}
