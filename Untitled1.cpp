#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node*next;
};
struct node*list=NULL;

void display()
{
	struct node*p;
	p=list;
	
	if(list == NULL)
	{
		printf("list is null!!\n");
	}
	else
	{
		while(p!=NULL)
		{
			printf("%d",p->info);
			p=p->next;	
		}	
	}
}

void concantenate(struct node*a,struct node*b)
{
	if(a!=NULL && b!=NULL)
	{
		if(a->next == NULL)
		{
			a->next = b;
		}
		else
		{
			concantenate(a->next,b);
		}
	}
}

int main()
{
	struct node*prev,*a,*b,*p;
	int n,i;
	
	printf("number of elements in a:\n");
	scanf("%d",&n);
	a=NULL;
	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->info);
		p->next=NULL;
		
		if(a==NULL)
		{
			a=p;
		}
		else
		{
			prev->next=p;
			prev=p;
		}
	}
	printf("number of elements in b:\n");
	scanf("%d",&n);
	b=NULL;
	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->info);
		p->next=NULL;
		if(b==NULL)
		{
			b=p;
		}
		else
		{
			prev->next=p;
			prev=p;
		}
	}
	concantenate(a,b);
}

