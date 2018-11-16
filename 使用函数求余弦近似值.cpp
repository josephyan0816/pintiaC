#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x ){
		int flag=-1;
		double fenzi,fenmu,item,cosx;
		cosx=1.0;
		fenzi=1.0;
		fenmu=1.0;
		item=1.0;
		int i;
	for(i=2;fabs(item)>=e;i=i+2)
	{
		fenmu=fenmu*i*(i-1);
		fenzi=fenzi*x*x;
		item=1.0*flag*fenzi/fenmu;
		cosx=cosx+item;
		flag=-flag;
		}	
		return cosx;
}
