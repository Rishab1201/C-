#include<stdio.h>
#include<stdlib.h>

void insertAtBack(int x);
void display();
void deleteAtEnd();

struct node{
	struct node *prev;
	int data;
	struct node*next;
};

struct node*list = NULL;

int main()
{
	insertAtBack(1);
	insertAtBack(2);
	insertAtBack(3);
	insertAtBack(5);
	insertAtBack(4);
	insertAtBack(7);
	insertAtBack(9);
	display();
	deleteAtEnd();
	deleteAtEnd();
	display();
}

void insertAtBack(int x)
{
	struct node *p;
	
	p = ((struct node *) malloc (sizeof (struct node)));
	
	struct node*q;
	
	p->next=NULL;
	p->prev=NULL;
	p->data=x;
	
	if(list==NULL)
	{
		list=p;
	}
	else
	{
		q=list;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->prev=q;
	}
}
void display()
{
	struct node*p;
	
	p=list;
	
	while(p!=NULL)
	{
//		if((p->data%2)!=0)
//		{
			printf("->%d",p->data);
//		}
		p=p->next;
		
	}
	printf("\n");
}

void deleteAtEnd()
{
	struct node*p;
	
	if(list->next==NULL)
	{
		free(list);
	}
	else
	{
		p=list;
		while(p->next->next!=NULL)
		{
			p=p->next;
		}	
		free(p->next);
		p->next=NULL;
	}
}
