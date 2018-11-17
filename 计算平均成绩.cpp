#include<stdio.h>
struct student{
	char id[6];
	char name[11];
	double score;
	
}stu;



int main(){
	int n;
	int i;
	scanf("%d",&n);
struct student stu[10];
	for(i=0;i<n;i++)
		scanf("%s%s%lf",&stu[i].id,&stu[i].name,&stu[i].score);
	double ave=0;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+stu[i].score;
	}
	ave=sum/n;
	printf("%.2f\n",ave);
	for(i=0;i<n;i++)
	{
		if(stu[i].score<ave){
			printf("%s %s\n",stu[i].name,stu[i].id);
		}
	}
}
