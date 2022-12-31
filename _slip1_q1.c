#include<stdio.h>
#include<conio.h>

void squ(int);

void main()
{
	int n;
	
	
	
	printf("Enter number:\n");
	scanf("%d",&n);
	
	squ(n);
	getch();
}
void squ(int n)
{
	int s;
	
	s=n*n;
	printf("Square:-%d",s);
}
