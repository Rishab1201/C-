#include<stdio.h>

int fibbo(int n);

int main()
{
	int n,f;
	printf("Enter a range:");
	scanf("%d",&n);
	
	f=fibbo(n);
	printf("%d",f);
}

int fibbo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else
	{
		return fibbo(n-1)+fibbo(n-2);	
	}
}
