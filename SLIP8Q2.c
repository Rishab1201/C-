#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node*next;
};

struct node*front,*rear=NULL;

void insert(int x)
{
	struct node*p;
	
	p=(struct node*)malloc(sizeof(struct node));
	
	p->next=NULL;
	p->info=x;
	
	if(front == NULL)
	{
		front=rear=p;
	}
	else
	{
		rear->next=p;
		rear=p;
	}
}
void display()
{
	struct node*p;
	
	p=front;
	while(p!=rear)
	{
		printf("%d-->",p->info);
		p=p->next;
	}
	printf("%d",p->info);
	
	printf("\n");
}

int main()
{
	int num,ch;
	
	while(1)
	{
		printf("--1.Enter the number in nodes--\n");
		printf("--2.Display--\n");
		printf("--3.Exit--\n");
		printf("Enter Your choice:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter the number:\n");
					scanf("%d",&num);
					insert(num);
					break;
					
			case 2:display();
					break;
				
			case 3:exit(0);
		}
	}
}
