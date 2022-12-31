#include<stdio.h>
void area(float n);

void main()
{
	float n;
	
	printf("Enter radius:");
	scanf("%f",&n);
	
	area(n);
}
void area(float a)
{
	float ar;
	
	ar=3.14*a*a;
	
	printf("%f",ar);
}
