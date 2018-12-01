#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}
struct ListNode *createlist()
{
	int num;
	struct ListNode *head,*tail;
	tail=NULL;
	head=NULL;
	do
	{
		scanf("%d",&num);
		
		if(num!=-1){
		tail=(struct ListNode*)malloc(sizeof(struct ListNode));
		tail->data=num;
		tail->next=head;
		head=tail;	}
		
	}while(num!=-1);
	return head;
	
}
