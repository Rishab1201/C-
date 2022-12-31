#include<stdio.h>
#include<conio.h>

struct cricket{
	char name[30];
	int id;
};

void main()
{
	struct cricket c[20];
	
	int i,n,sum=0;
	
	printf("Enter number of players:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter name of player:\n");
		scanf("%s",&c[i].name);
		
		printf("Enter score of player:\n");
		scanf("%d",&c[i].id);
		
		sum=sum+c[i].id;
	}
	
	printf("Total run scored by team:%d\n",sum);
}
