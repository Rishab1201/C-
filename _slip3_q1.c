#include<stdio.h>
#include<conio.h>

void f1(int);

void main()
{
	int n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	f1(n);
	getch();
}
void f1(int n)
{
	
	if(n%2==0)
	{
		printf("Even-%d\n",n);
	}
	else
	{
		printf("odd-%d",n);
	}
}
