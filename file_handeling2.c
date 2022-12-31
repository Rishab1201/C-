#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	
	char data[30];
	
	int i;

	
	printf("Enter some data-");
	gets(data);
	
	fp=fopen("rishab.txt","w+");
	
	i=0;
	
	if(fp==NULL)
	{
		exit(0);
	}
	while(data[i]!='\0')
	{
		fputc(data[i],fp);
		i++;
	}
	fclose(fp);
}
