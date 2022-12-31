#include<stdio.h>
#include<stdlib.h>

void insertAtFront( int x);
void Display();
void deleteAtAnyLocation(int pos);
 
struct node{
	struct node*prev;
	int data;
	struct node*next;
};

struct node*list=NULL;

int main()
{
	insertAtFront(1);
	insertAtFront(2);
	insertAtFront(3);
	insertAtFront(4);
	insertAtFront(5);
	deleteAtAnyLocation(5);
	Display();
	
}

void insertAtFront( int x)	//Inserting element at Front of an arry;
{
	struct node*p;
	
	p=((struct node*) malloc (sizeof (struct node)));
	
	p->next=NULL;
	p->prev=NULL;
	p->data=x;
	
	if(list==NULL)
	{
		list=p;
	}
	else
	{
		p->next=list;
		list->prev=p;
		list=p;
	}
}

void deleteAtAnyLocation(int pos)	//deleteAtAnyLocation
{
	int i;
	struct node*p,*q;
	
	if(list==NULL)
	{
		if("list is empty");
	}
	else if(list->next==NULL)
	{
		free(list);
	}
	else
	{
		if(pos==1)
		{
			p=list;
			list=list->next;
			free(p);
		}
		else
		{
			for(i=1,q=list;i<pos-1&&q->next!=NULL;i++,q=q->next)
									
									;
									
				if(q->next!=NULL)
				{
					p=q->next;
					q->next=p->next;
					p->next=p->prev;
					p->next=NULL;
					p->prev=NULL;
					free(p);
				}
		}
	}
}

void Display()  //Displaying the element of an arry;
{
	struct node*p;
	
	p=list;
	
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
