#include<stdio.h>
#include<stdlib.h>

void insertAtBack(int x);
void display();

struct node{
	int info;
	struct node*next;
	struct node*prev;
};

struct node*list,*q=NULL;

int main()
{
	int num,ch;
	
	while(1)
	{
		printf("---Enter the elements---\n");
		printf("---Display---\n");
		printf("---Exit---\n");
		printf("Enter your Choise:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter Number:\n");
					scanf("%d",&num);
					
					insertAtBack(num);
					break;
					
			case 2:display();
					break;
					
			case 3:exit(0);
			
		}
	}
}

void insertAtBack(int x)
{
	struct node*p;
	
	p=(struct node*) malloc(sizeof(struct node));
	
	p->next=NULL;
	p->prev=NULL;
	p->info=x;
	
	if(list == NULL)
	{
		list=q=p;
		q->next=list;
		list->prev=list;
	}
	else
	{
		q->next=p;
		p->prev=q;
		p->next=list;
		list->prev=p;
		q=p;
	}
	
}

void display()
{
	struct node*p;
	
	p=list;
	
	while(p!=q)
	{
		printf("%d->",p->info);
		p=p->next;
	}
	printf("%d\n",p->info);
}
