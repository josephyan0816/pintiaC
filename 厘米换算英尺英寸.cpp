#include<stdio.h>
int main()
{
	float nh,h;
	int foot;
	float inch;
	scanf("%f",&h);
	nh=(h/100)/0.3048;
	foot=(int)nh;
	inch=(int)((nh-foot)*12);
	printf("%d %.f",foot,inch);
	
	
}
