#include<stdio.h>

#define max 10
int  top=-1;
int arr[max];

void push (int data);
void peek();
void pop();
int isempty();
void display();


int main()
{	
	push(5);
	push(10);
	push(11);
	push(12);
	peek();
	display();
}
void push (int data)
{
	if(!full())
	{
		top=top+1;
		arr[top]=data;
	}
}
int full()
{
	if(top==max-1)
	{
		printf("Stack full!!");
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void pop()
{
	if(isempty())
	{
		if("the stack is empty");
	}
	else
	{
		top=top-1;
	}
}
void peek()
{
	printf("Element at top is:%d",arr[top]);
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
	
}
