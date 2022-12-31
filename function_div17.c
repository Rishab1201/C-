#include<stdio.h>

void div(int a,int b);

int main()
{
	int a,b;
	printf("enter first number-->");
	scanf("%d",&a);
	printf("enter second number-->");
	scanf("%d",&b);
	
	div(a,b);
}
void div(int a,int b)
{
	int div;
	div=a/b;
	printf("division=%d",div);
}
