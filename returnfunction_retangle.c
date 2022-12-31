#include<stdio.h>
int area(int l,int b,int h);

int main()
{
	int l,b,h,ret;
	printf("Enter length:");
	scanf("%d",&l);
	
	printf("Enter breadth:");
	scanf("%d",&b);
	
	printf("Enter height:");
	scanf("%d",&h);
	
	ret=area(l,b,h);
	printf("Area of retangle=%d",ret);
}
int area(int l,int b,int h)
{
	int ret;
	ret=l*b*h;
	return ret;
}

