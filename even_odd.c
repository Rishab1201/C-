#include<stdio.h>

int evod(int a);

int main()
{
	int a,n;
	printf("enter a number:");
	scanf("%d",&a);
	
	n=evod(a);
	if(n==1)
	printf("even--> %d\n",a);
	else 
	printf("odd--> %d\n",a);
}
int evod(int a)
{
	if(a%2==0)
	return 1;
	
	else
	return 0;
}
