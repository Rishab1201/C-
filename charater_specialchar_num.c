#include<stdio.h>

int next(char a);

int main()
{
	char a;
	int n;
	printf("enter a character=");
	scanf("%c",&a);
	
	n=next(a);
	if(n==1)
	printf("alphabet--->%d\n",n);
	else if(n==2)
	printf("number---->%d\n",n);
	else 
	printf("special character----->%d\n",n);
	
}
int next(char a)
{
	if((a>='a' && a<='z')||(a>='A' && a<='Z'))
	return 1;
	
	else if(a>='0' && a<='9')
	return 2;
	
	else
	return 3;
}
