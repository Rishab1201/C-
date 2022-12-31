#include<stdio.h>
#include<conio.h>

void swap(int,int);

void main()
{
	int a,b;
	
	printf("Enter number A:");
	scanf("%d",&a);
	
	printf("Enter number B:");
	scanf("%d",&b);
	
	swap(a,b);
	getch();
}
void swap(int a,int b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
	
	printf("Afte Swapping\n");
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
	
}
