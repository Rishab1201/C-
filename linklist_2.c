#include<stdio.h>
#include<stdlib.h>

void display();
void count();
void insertAtFront();
void deleteAtFront();
void deleteAtEnd();

struct node{
	int info;
	struct node*next;
};

struct node*list=NULL;

int main()
{	
	int ch,num,d;
	struct node*p;



	while(1)
	{
		printf("1.insert\n");
		printf("2.display\n");
		printf("3.count\n");
		printf("4.Delete at front\n");
		printf("5.Delete at End\n");
		printf("6.Search number\n");
		printf("7.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Insert the number:\n");
					scanf("%d",&num);
					insertAtFront(num);
				break;
			
			case 2:printf("Display of element:\n");
				display();
			break;
			
			case 3:printf("Count of element:\n");
				count();
			break;
			case 4: printf("Delete at front:\n");
				deleteAtFront();
			break;
			
			case 5:printf("Delete at End:\n");
				deleteAtEnd();
			break;
			
			case 6:printf("Search number:\n");
				   printf("Enter number which you want to search:\n");
				   scanf("%d",&d);
				   
			break;
			
			case 7: exit(0);
		}
		
	}

}

void insertAtFront( int x)
{
	struct node *p;
						
	p=(struct node*) malloc(sizeof(struct node));
						
	p->next=NULL;
	p->info=x;
						
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

void count()
{
	int cnt=0;
	struct node*p;
	p=list;
	
	while(p!=NULL)
	{
		cnt++;
		p=p->next;
	}
	printf("Count=%d\n",cnt);
}

void deleteAtFront()
{
	struct node*p;
	
	if(list==NULL)
	{
		printf("list is empty");
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

void deleteAtEnd()
 {
	struct node*p;
	
	if(list==NULL)
	{
		printf("NO element to delete");
	}
	else if(list->next==NULL)
	{
		free(list);
		list=NULL;
	}
	else
	{
		for(p=list;p->next->next=NULL;p=p->next)
	
		;
		
		free(p->next);
		p->next=NULL;
}

}
