#include<stdio.h>
int main(){
	int sum;
	char op;
	scanf("%d%c",&sum,&op);
	int x;
	
	int flag=0;
	while(op!='=')
	{
		scanf("%d",&x);
		switch(op)
		{
			case '+':{
				sum=sum+x;
				break;
			}	
			case '-':{
				sum=sum-x;
				break;
			}
			case '*':{
				
				sum=sum*x;
				break;
			}		
			case '/':{
				if(x==0)printf("ERROR");
				else sum=sum/x;
				break;
			}
			default:{
			flag=1;
			break;
			}
			
		}
		if(flag==1){
			printf("ERROR");
			break;
		}
		scanf("%c",&op);
		
	}
	if(x!=0&&flag!=1)printf("%d",sum); 
	
}
