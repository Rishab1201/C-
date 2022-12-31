							//SLIP NO.28
//Q.1

#include<stdio.h>
#include<string.h>

int main()
{
	int cnt=0,i=0;
	char a[5],ch,n;
	
	printf("Enter a string:");
	scanf("%s",&n);
	
	printf("Enter the character to know the count");
	scanf("%c",&ch);
	
	while(a[i]!='\0')
	{
		if(a[i]==ch)
		{
			cnt++;
		}
		i++;		
	}
	if(ch==0)
	{
		printf("Oooops character not found");
	}
	else
	{
		printf("occurances-->%d",cnt);
	}
}
