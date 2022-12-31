#include<stdio.h>


void accept(int*a)
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int*a)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
void take(int*b)
{
	int j;
	for(j=0;j<10;j++)
	{
		scanf("%d",&b[j]);
	}
}
void show(int*b)
{
	int j;
	for(j=0;j<10;j++)
	{
		printf("%d\n",&b[j]);
	}
}
void add(int*c,int *a,int *b)
{
	int i;
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
	}
}
void dis(int*c)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("sum=>%d",c[i]);
	}
}
void main()
{
	int a[10];
	int b[10];
	int c[10];
	
	accept(a);
	display(a);
	
	take(b);
	show(b);
	
	add(c,a,b);
	dis(c);
}
