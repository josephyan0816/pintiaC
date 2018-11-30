#include<stdio.h>
#include<stdlib.h>
//typedef struct node{
//	int data;
//	struct node *next;
//}Node;
typedef struct node *ptNode;
struct	node{
	int data;
	ptNode next;
};
typedef ptNode List;
int main()
{
	List head=NULL;
	int num;
	do{
		scanf("%d",&num);
		if(num!=-1)
		{
			List p=(List)malloc(sizeof(struct node));
			p->data=num;
			p->next=head;
			head=p;
			
		}
	}while(num!=-1);
	List q;
	for(q=head;q;q=q->next)
		printf("%d ",q->data);
	
}
