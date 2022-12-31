#include<stdio.h>
void square(int n);

void main()
{
	int n;
	
	printf("Enter a no.-->");
	scanf("%d",&n);
	
	square(n);
}
void square(int n)
{
	int a;
	a=n*n;
	
	printf("%d",a);
}
