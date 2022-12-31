#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int info;
	struct node* next;
};

struct node*list=NULL;

int main()
{
	//int x;
	//printf("Enter the value:\n");
	//scanf("%d",&x);
	
	insert(20);
	display();
	count();
	
	
}
void insert(int x)
	{
		struct node *p;
		
		p=(struct node*) malloc (sizeof (struct node));
		
		p->next=NULL;
		p->info=x;
		
		if(list==NULL)
		{
			list=p;
		}
		else{
			p->next=list;
			list=p;
		}
	}
	
	void display()
	{
		struct node*p;
		
		p=list;
		
		while(p!=NULL)
		{
			printf("%d\n",p->info);
			
			p=p->next;
		}
	}
	
int count()
{
	struct node *p;
	int cnt=0;
	p=list;
	
	while(p!=NULL)
	{
		cnt++;
		p=p->next;
	}
	printf("count of element is:%d\n",cnt);
}
