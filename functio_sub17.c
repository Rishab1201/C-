#include<stdio.h>

void sub(int a,int b);

int main()
{
	int a,b;
	printf("enter first number-->");
	scanf("%d",&a);
	printf("enter second number-->");
	scanf("%d",&b);
	
	sub(a,b);
}
void sub(int a,int b)
{
	int sub;
	sub=a-b;
	printf("sub=%d",sub);
}
