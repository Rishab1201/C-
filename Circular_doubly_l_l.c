#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node*next;
	struct node*prev;
};

struct node*list=NULL;

void insertAtFront(int x);
void display();

int main()
{
	int ch,num;
	
	while(1)
	{
		printf("1.Insert At Front\n");
		printf("2.Display\n");
		printf("3.Exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter elements:\n");
				   scanf("%d",&num);
				   insertAtFront(num);
				   break;
			
			case 2:display();
				   break;
				   	   
			case 3:exit(0);
		}
	}
}

void insertAtFront(int x)
{
	struct node*p,*q;
	
	p=(struct node*)malloc(sizeof(struct node));
	
	p->next=NULL;
	p->prev=NULL;
	p->info=x;
	
	if(list==NULL)
	{
		list=p;
		list->next=list;
		list->prev=list;
//		printf("%d",p->info);
	}
	else
	{
		q=list;
		while(q->next!=list)
		{
			q=q->next;
		}
		p->next=list;
		list=p;
		q->next=list;
		list->prev=q;
//		printf("%d",q->next->info);
	}
}


void display()
{
	struct node*p;
	
	p=list;
	
	while(p->next!=list)
	{
		printf("->%d",p->info);
		p=p->next;
	}
	if(p->next==list)
	{
		printf("->%d\n",p->info);
	}
}
