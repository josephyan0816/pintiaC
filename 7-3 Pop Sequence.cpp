#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
int a[MAX];
typedef struct Node
{
	int *s;
	int top;
 }*Stack;
Stack createStack()
{
	Stack ptr=(Stack)malloc(sizeof(struct Node));
	ptr->s=(int*)malloc(sizeof(int)*MAX);
	ptr->top=-1;
	
	return ptr;
 } 
 void Push(Stack ptr,int x);
 void Pop(Stack ptr);
 int main()
 {
 	
 	int m,n,k;
 	int flag,start;
 	int j;
 	scanf("%d%d%d",&m,&n,&k);
 	Stack ptr=createStack();
 	while(k--)
 	{
 		start=0;
 		flag=1;
 		for(int i=0;i<n;i++)
 		scanf("%d",&a[i]);
 		
 		ptr->top=-1;
 		
 		for(int i=0;i<n;i++)
 		{
 			
 			if(ptr->s[ptr->top]>a[i]&&ptr->top!=-1)
 			{
 				flag=0;
 				break;
			 }
 			
 			if(ptr->top=-1||ptr->s[ptr->top]<a[i])	
 			{
 				
 				for(j=1;j<=a[i]&&ptr->top<m-1;j++)
 				{
 					Push(ptr,j);
 					//start++;
				 }
 				
 				
			 }
			if(ptr->top==m-1&&ptr->s[ptr->top]!=a[i])
			{
				flag=0;
				break;
			 } 
 		Pop(ptr);	
		 }
 		if(flag==1)printf("YES\n");
 		if(flag==0)printf("NO\n");
 			
	 }
 	
 	
 }
  void Push(Stack ptr,int x)
  {
  	if(ptr->top==MAX-1)return ;
  	ptr->top++;
  	ptr->s[ptr->top]=x;
  }
  void Pop(Stack ptr)
  {
  	if(ptr->top==-1)return ;
  	ptr->top--;
  	
   } 
