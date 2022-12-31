#include<Stdio.h>

void main()
{
	int n,sum=0;
	
	printf("\n enter a number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	printf("\n sum of digit is: %d",sum);
	getch();
}
