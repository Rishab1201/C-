#include<stdio.h>

struct book{
	
	int bno;
	char bname[30];
	int price;
	
};
int main()
{
	int n,i,max=0,ch;
	
	struct book b[30];
	
	printf("Enter number of books:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter book number:\n");
		scanf("%d",&b[i].bno);
		
		getchar();
		
		printf("Enter Name of book:\n");
		gets(b[i].bname);
		
		printf("Enter price of book:\n");
		scanf("%d,",&b[i].price);
		
		if(b[i].price>max)
		{
			max=b[i].price;
		}
	}
	//printf("max-%d",max);
	
	printf("1.Display all books having price>500\n");
	printf("2.Display book having maximum price\n");
	
	printf("Enter your choise:\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("Details of all books having price>500-\n");
		for(i=1;i<=n;i++)
		{
			if(b[i].price>500)
			{
				printf("Book number:%d\n",b[i].bno);
				
				printf("Book Name:");
				puts(b[i].bname);
				printf("\nBook price:%d\n",b[i].price);
			}
		}
		break;
		
		case 2:printf("Details of book having maximum price-\n");
		for(i=1;i<=n;i++)
		{
			if(max==b[i].price)
			{
				printf("Book number:%d\n",b[i].bno);
				printf("Book name:");
				puts(b[i].bname);
				printf("Book price:%d\n",b[i].price);
			}
		}
	}
}
