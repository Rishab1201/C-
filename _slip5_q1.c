#include<stdio.h>
#include<conio.h>

int fibo(int);

int main()
{
	int n;
	
	printf("Enter number:\n");
	scanf("%d",&n);
	
	fibo(n);
}
int fibo(int n)
{
	int f,f1=0,f2=1,i;
	
	printf("%d%d",f1,f2);
	
	for(i=1;i<=n-2;i++)
	{
		f=f1+f2;
		printf("%d",f);
		f1=f2;
		f2=f;
	}
}
