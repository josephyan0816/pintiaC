#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); //就是头插法，注意这题不要设头结点
struct ListNode *reverse( struct ListNode *head );
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
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);
	
    return 0;
}
struct ListNode *createlist()
{
	int num;
	scanf("%d",&num);
	if(num==-1)return NULL;
	ListNode *L=(struct ListNode*)malloc(sizeof(struct ListNode));
	ListNode *Last=L;
	L->next=NULL;
	L->data=num;
	scanf("%d",&num);
	while(num!=-1)
	{
		ListNode *tail=(struct ListNode*)malloc(sizeof(struct ListNode));
		tail->data=num;
		tail->next=NULL;
		Last->next=tail;
		Last=tail;
		scanf("%d",&num);
	}
	return L;
}
struct ListNode *reverse( struct ListNode *head )
{
	struct ListNode *nhead=NULL,*tail=NULL,*p=head;
//	if(head==NULL||head->next==NULL)return NULL;
	
	while(p)
	{
		tail=p->next;
		p->next=nhead;
		nhead=p;
		p=tail;
	}
	
	return nhead;
}
