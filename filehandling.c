#include<stdio.h>

int main()
{
	char c,name[20];
	
	FILE *fp;
	
	printf("Enter a file name-->");
	scanf("%s",&name);
	
	fp=fopen(name,"r");
	
	if(fp==NULL)
	{
		printf("Error in opening file");
	}
	printf("data\n");
	
	while((c=fgetc(fp))!=EOF)
	{
		putchar (c);
	}
	fclose(fp);
}
