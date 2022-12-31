#include<stdio.h>

void nchar(char a,int n)
{

	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%c\n",a+i);
	}
}
void main()
{
	char a;
	int n;
	
	printf("enter a character=");
	scanf("%c",&a);
	
	printf("next charater you want to print----->");
	scanf("%d",&n);
	
	nchar(a,n);
}

