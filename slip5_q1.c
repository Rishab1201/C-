								//SLIP NO.5
//Q1.

#include<stdio.h>

int main()
{
	int l,b,h,sa,v;
	
	printf("Enter length of cuboid:");
	scanf("%d",&l);
	
	printf("Enter breadth of cubiod:");
	scanf("%d",&b);
	
	printf("Enter heingh of cuboid:");
	scanf("%d",&h);
	
	sa=2*(l*b+l*h+b*h);
	
	printf("The surface area of a cuboid is--->%d",sa);
	
	v=l*b*h;
	
	printf("\nThe volume of a cuboid is--->%d",v);
}
