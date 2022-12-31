#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,a=0,b,f=1,c;
	
	printf("Enter number a:\n");
	scanf("%d",&a);
	
	printf("Enter a number:\n");
	scanf("%d",&b);
	
	
	for(i=0;i<b;i++)
	{
		c=a+f;
		printf("%d\n",a);
		a=f;
		f=c;
	}
	
	
}
