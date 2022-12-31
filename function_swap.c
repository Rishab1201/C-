#include<stdio.h>
void swap(int a,int b);

void main()
{
	int a,b;
	
	printf("Enter no.1=");
	scanf("%d",&a);
	
	printf("Enter no.2=");
	scanf("%d",&b);
	
	swap(a,b);
}
void swap(int a,int b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
	
	printf("%d\n",a);
	
	printf("%d",b);
	
}
