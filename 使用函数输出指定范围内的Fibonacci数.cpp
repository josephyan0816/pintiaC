#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
int fib( int n )
{
	int i,pre1,pre2;
	pre1=1;
	pre2=1;
	int pre3;
	for(i=1;i<n;i++)
	{
		pre3=pre1+pre2;
		pre1=pre2;
		pre2=pre3;
	}
	return pre1;
	
	}
void PrintFN( int m, int n ){
	int i=1;
	int cnt=0;
	//这个计数器有2个作用，第一个作用是行末不输出空格，第二个作用是用来判断是否最后有fib数 
	
	for(i=1;i<30;i++)
	{
		if(fib(i)<=n&&fib(i)>=m)
		{
			if(cnt==0)	
			{
				printf("%d",fib(i));
				cnt++;
			}
			else{
				printf(" %d",fib(i));
				cnt++;
			}
		}
			
	}
	
	if(cnt==0)printf("No Fibonacci number\n");
	
	}
