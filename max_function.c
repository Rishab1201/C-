#include<stdio.h>

void maxi(int a,int b,int c);

void main()
{
	int a,b,c;
	printf("enter the 1st number:");
	scanf("%d",&a);
	
	printf("enter the 2nd number:");
	scanf("%d",&b);
	
	printf("enter the 3rd number:");
	scanf("%d",&c);
	
	maxi(a,b,c);
}
void maxi(int a,int b,int c)
{
	if(a>b&&a>c)
	printf("%d",a);
	
	if(b>a&&b>c)
	printf("%d",b);
	
	if(c>a&&c>b);
	printf("%d",c);
}
