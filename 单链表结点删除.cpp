#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
   	 int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}
struct ListNode *readlist(){
//	int num;
//	scanf("%d",&num);
//	if(num==-1)return NULL;
//	struct ListNode *list,*last;
//	last=list;
//	list->data=num;
//	list->next=NULL;
//	scanf("%d",&num);
//	while(num!=-1)
//	{
//		struct ListNode *t;
//		
//		t->data=num;
//		t->next=NULL;
//		last->next=t;
//		last=t;
//		scanf("%d",&num);
//		
//		
//	}
//	return list;
struct ListNode *head,*last,*p;
head=(struct ListNode*)malloc(sizeof(struct ListNode));
head->next=NULL;
p=head;
int num;
scanf("%d",&num);
while(num!=-1)
{
	last=(struct ListNode*)malloc(sizeof(struct ListNode));
	last->data=num;
	p->next=last;
	p=last;
	scanf("%d",&num);
	
}
p->next=NULL;
return head;
}
struct ListNode *deletem( struct ListNode *L, int m )
{
//	struct ListNode *ptr1,*ptr2;
//		while(L->next!=NULL&&L->data==m)
//		{
//			ptr2=L;
//			L=L->next;
//			free(ptr2);
//		}
//		if(L==NULL){
//			return NULL;
//		}
//		ptr1=L;
//		ptr2=L->next;
//		while(ptr2!=NULL)
//		{
//			if(ptr2->data==m)
//			{
//				ptr1->next=ptr2->next;
//				free(ptr2);
//			}
//			else ptr1=ptr2;
//			ptr2=ptr1->next;
//		}
//	return L;
L=L->next;
struct ListNode *p,*head,*last;
head=(struct ListNode*)malloc(sizeof(struct ListNode));
head->next=NULL;
p=head;
while(L)
{
	
	if(L->data!=m)
	{
		last=(struct ListNode*)malloc(sizeof(struct ListNode));
		last->data=L->data;
		p->next=last;
		p=last;
		
	}
	L=L->next;
}
p->next=NULL;
return head->next;
}
