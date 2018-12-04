#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}
struct ListNode *createlist()
{
	struct ListNode *L,*last,*p;
	L=(struct ListNode*)malloc(sizeof(struct ListNode));
	L->next=NULL;
	p=L; 
	int num;
	scanf("%d",&num);
	if(num==-1)return NULL;
	L->data=num;
	scanf("%d",&num);
	while(num!=-1)
	{
		last=(struct ListNode*)malloc(sizeof(struct ListNode));
		last->data=num;
		L->next=last;
		L=last;
		scanf("%d",&num);
	}
	L->next=NULL;
	return p;
	
	
}
struct ListNode *deleteeven( struct ListNode *head )
{		struct ListNode *L,*p,*last;
	L=(struct ListNode*)malloc(sizeof(struct ListNode));
	L->next=NULL;
	p=L;
	
	while(head)
	{
		if(head->data%2!=0)
		{
			last=(struct ListNode*)malloc(sizeof(struct ListNode));
			last->data=head->data;
			last->next=NULL;
			p->next=last; 
			p=last;
			
		}
		head=head->next;
	}
	p->next=NULL;
	return L->next;
}
