#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node*next;
};

struct node *list,*list1=NULL;

void insert(int x)
{
	struct node*p,*q;
	
	p=(struct node*)malloc(sizeof(struct node));
	
	p->next=NULL;
	p->info=x;
	
	if(list == NULL)
	{
		list = p;
	}
	else{
		q=list;
		
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
	
}

void display()
{
	struct node*p,*q;
	
	p=list;
	
	while(p!=NULL)
	{
		printf("%d->",p->info);
		p=p->next;
	}
	
	printf("\n");
	
	printf("-----Second list----\n");
	
	q=list1;
	
	while(q!=NULL)
	{
		printf("%d->",q->info);
		q=q->next;
	}
	printf("\n");
}

void insert1(int n)
{
	struct node*p,*q;
	
	p=(struct node*)malloc(sizeof(struct node));
	
	p->next=NULL;
	p->info=n;
	
	if(list1==NULL)
	{
		list1=p;
	}
	else{
		q=list1;
		
		while(q->next!=NULL)
		{
			q=q->next;
		}
		
		q->next=p;
	}
}

void unionlist()
{
	struct node*p,*temp;
	
	struct node*i,*j;
	
	p=list;
	
	
	
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=list1;
	
	temp=list;
	
//	while(temp!=NULL)
//	{
//		printf("%d-->",temp->info);
//		temp=temp->next;
//	}
	printf("\n");
	
	printf("----UNION OF LIST----\n");
	
	for(i=list;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j++)
		{
			if(j->next==NULL)
			{
				printf("%d------>",j->info);
			}
			if(i->info==j->info)
			{
				break;
		 }
			else
			{
				printf("%d------>",i->info);
				break;
			}
		}
	}
	printf("\n");
}

int main()
{
	int num,ch,val;
	
	while(1)
	{
		printf("1.Enter element in first list:\n");
		printf("2.Enter element in second list:\n");
		printf("3.Display both the list:\n");
		printf("4.Display union of lists:\n");
		printf("5.Exit\n");
		printf("Enter your choise:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter the the sorted element:\n");
					scanf("%d",&num);
					insert(num);
					
					break;
					
			case 2:printf("Enter the sorted elements:\n");
					scanf("%d",&val);
					insert1(val);
					
					break;
					
			case 3:display();
					break;
					
			case 4:unionlist();
					break;
					
			case 5:exit(0);
		}
	}
}
