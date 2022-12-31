#include<stdio.h>
void pal(int n);

void main()
{
	int n;
	
	printf("enter a number:");
	scanf("%d",&n);
	
	pal(n);
	
}
void pal(int n)
{
	int i,t,sum=0,r;
	t=n;
	
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		printf("%d\n",sum);
		n=n/10;
	}
	if(t==sum)
	{
		printf("%d is palindrome number",t);
	}
	else
	{
		printf("%d is not palindrome number",t);
	}
	
}
