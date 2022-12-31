#include<stdio.h>
#include<stdlib.h>

void insertAtFront(int x);
void Display();
void deleteAtFront();


struct node{
	int data;
	struct node*next;
};

struct node*list=NULL;

int main()
{
	
	insertAtFront(3);
	insertAtFront(5);
	insertAtFront(4);
	deleteAtFront();
	Display();
}

void insertAtFront(int x)  //inserting element at front
{
	struct node*p;
	
	p=((struct node*) malloc (sizeof(struct node)));
	
	p->next=NULL;
	p->data=x;
	
	if(list==NULL)
	{
		list=p;
	}
	else
	{
		p->next=list;
		list=p;
	}
}

void Display() //displaying the elements
{
	struct node*p;
	
	p=list;
	
	while(p!=NULL){
		
		printf("%d\t",p->data);
		p=p->next;
	}
}

void deleteAtFront()
{
	struct node*p;
	
	if(list==NULL)
	{
		printf("The list is null");
	}
	else if(list->next==NULL)
	{
		free(list);
		list=NULL;
	}
	
	else
	{
		p=list;
		
		list=list->next;
		
		free(p);
	}
}
