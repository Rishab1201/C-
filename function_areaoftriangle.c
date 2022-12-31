#include<stdio.h>
void area(float b,float h);

void main()
{
	float b,h;
	
	printf("Enter base:");
	scanf("%f",&b);
	
	printf("Enter height:");
	scanf("%f",&h);
	
	area(b,h);
}
void area(float b,float h)
{
	float area;
	
	area=0.5*b*h;
	
	printf("Area of triangle:%f",area);
}
