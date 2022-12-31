#include<Stdio.h>
void pri(int n);

void main()
{
	int n;
	
	printf("Enter upper number:");
	scanf("%d",&n);
	
	pri(n);
}
void pri(int n)
{
	int i;
	
	for(i=1;i<n;i++)
	{
		printf("%d\n",i);
	}
}
