								//SLIP NO.26
//Q.1

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10],n;
	int len=0,i=0;
	
	printf("Enter a string:");
	scanf("%s",&n);
	
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	printf("The length of string is-->%d",len);
}
