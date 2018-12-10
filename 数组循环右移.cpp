#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
int ArrayShift( int a[], int n, int m )
{
	int p[n];
	int i;
	m=m%n;
	
	for(i=0;i<n;i++)
	{
			p[i]=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(i>=(n-m))
		{
			a[i+m-n]=p[i];
		}
		else{
			a[i+m]=p[i];
		}
	}
}
