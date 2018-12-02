#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}
struct stud_node *createlist(){
	int number;
	struct stud_node *p,*head,*tail;
	head=(struct stud_node*)malloc(sizeof(struct stud_node));
	head->next=NULL;
	p=head;
	scanf("%d",&number);
	while(number!=0)
	{
		tail=(struct stud_node*)malloc(sizeof(struct stud_node));
		tail->num=number; 
		scanf("%s%d",tail->name,&tail->score);
		
		p->next=tail;
		
		p=tail;
		tail->next=NULL;
		scanf("%d",&number); 
	}
	return head;
}

	
struct stud_node *deletelist( struct stud_node *head, int min_score )
{
	struct stud_node *p;
	p=head;
	while(p->next!=NULL)//p->next不为空的情况下，就一定能保证有下一个节点吗
	{	int flag=0;
		if(p->next->score<min_score)
		{
			struct stud_node *temp;
			temp=p->next;
			p->next=temp->next;
			free(temp);
			flag=1;
		}
		p=p->next;
		if(flag)
		p=head;
	}
	return head->next;
}
