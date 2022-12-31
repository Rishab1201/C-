#include<stdio.h>

void fibbo(int n);
void main()
{
	int n;
	printf("Enter a range:");
	scanf("%d",&n);
	
	fibbo(n);
}
void fibbo(int n)
{
	int a=0,b=1,c,i;
	
	printf("%d%d",b,c);
	
	for(i=0;i<n;i++)
	{
		a=c+b;
		printf("%d",a);
		b=c;
		c=a;
	}
}
