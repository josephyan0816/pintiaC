#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}
int IsTheNumber ( const int N )
{
	int flag=0;
	int i;
	int ret=0;
	int b[10]={0};
	int sum;
	int digit;
	for(i=1;i<=sqrt(N);i++)
	{	sum=i*i;
		if(sum==N)ret=1;
	}
	while(sum!=0)
	{
		digit=sum%10;
		b[digit]++;
		sum=sum/10;
	}
	for(i=0;i<10;i++)
	{
		if(b[i]>=2)flag=1;
	}
	if(flag==1&&ret==1)return 1;
	else return 0;
}
