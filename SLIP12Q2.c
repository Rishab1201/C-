#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node*next;
};

struct node*top = NULL;

void push(int x);
void pop();
void peek();
void display();

int main()
{
	int ch,num;
	
	while(1)
	{
		printf("---1.Push---\n");
		printf("---2.Pop---\n");
		printf("---3.Peek---\n");
		printf("---4.Display---\n");
		printf("---5.Exit---\n");
		printf("Enter your choise:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter the elements:\n");
					scanf("%d",&num);
					push(num);
					
					break;
					
			case 2:pop();
					break;
					
			case 3:peek();
					break;
					
			case 4:display();
					break;
			
			case 5:exit(0);
		}
	}
}

void push(int x)
{
	struct node*p;
	
	p=(struct node*)malloc (sizeof(struct node));
	
	p->next=NULL;
	p->info=x;
	
	if(top == NULL)
	{
		top = p;
	}
	else
	{
		p->next = top;
		top = p;
	}
}

void pop()
{
	struct node*p;
	
	if(top == NULL)
	{
		printf("List is empty!!!!\n");
	}	
	else if(top->next==NULL)
	{
		free(top);
	}
	else
	{
		p=top;
		top=top->next;
		
		free(p);
	}
}

void peek()
{
	printf("Element at the peek-->%d\n",top->info);
}

void display()
{
	struct node*p;

	p=top;
	
	while(p!=NULL)
	{
		printf("--%d--\n",p->info);
		p=p->next;
	}
}
