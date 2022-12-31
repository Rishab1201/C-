#include<stdio.h>

void fibo(int n);

void main()
{
	int n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	fibo(n);
	
}
void fibo(int n)
{
	int a=0,b=1,c,i;
	
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d",a);
		a=b;
		b=c;
	}
}
