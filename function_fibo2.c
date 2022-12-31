#include<stdio.h>

int fibo(int n);

int main()
{
	int n;
	printf("Enter a range:\n");
	scanf("%d",&n);
	
	fibo(n);
}
int fibo(int n)
{
	int a,b=0,c=1,i;
	
	printf("%d%d",b,c);
	
	for(i=1;i<=n-2;i++)
	{
		a=b+c;
		printf("%d",a);
		b=c;
		c=a;
		
	}
}
