#include<stdio.h>

int maxi(int a,int b,int c);

int main()
{
	int a,b,c,n;
	printf("enter 1st number:");
	scanf("%d",&a);
	
	printf("enter 2nd number:");
	scanf("%d",&b);
	
	printf("enter 3rd number:");
	scanf("%d",&c);
	
	n=maxi (a,b,c);
	printf("%d",n);
}
int maxi(int a,int b,int c)
{
	if(a>b&&a>c)
	return a;
	
	if(b>a&&b>c)
	return b;
	
	if(c>a&&c>b)
	return c;
}
