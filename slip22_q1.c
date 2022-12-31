								//SLIP NO.22
//Q.1

#include<stdio.h>

int main()
{
	int i,j,n;
	char ch;
	
	ch='A';
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("%c\t",ch++);
		}
		printf("\n");
	}
}
