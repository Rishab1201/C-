#include<stdio.h>
#include<conio.h>

struct item{
	
	int ino;
	char iname[30];
	int price;
};

int main()
{
	struct item i1[30];
	
	int n,i,ch;
	
	printf("Enter number of items:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter item number:\n");
		scanf("%d",&i1[i].ino);
		
		printf("Enter item name:\n");
		scanf("%s",&i1[i].iname);
		
		printf("Enter item price:\n");
		scanf("%d",&i1[i].price);
	}
	
	printf("1.Display all items having price>800\n");
	printf("2.Display item record with ino=2\n");
	
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("Details of all items having price>800\n");
		
		for(i=1;i<=n;i++)
		{
			if(i1[i].price>800)
			{
				printf("Item number:%d\n",i1[i].ino);
				printf("Item name:%s\n",i1[i].iname);
				printf("Item price:%d\n",i1[i].price);
			}
		}
		break;
		
		case 2:printf("Details of item record with Ino=2\n");
		
		for(i=1;i<=n;i++)
		{
			if(i1[i].ino==2)
			{
				printf("Item number:%d\n",i1[i].ino);
				printf("Item name:%s\n",i1[i].iname);
				printf("Item price:%d\n",i1[i].price);
			}
		}
	}
}
