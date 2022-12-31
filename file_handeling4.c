#include<stdio.h>

int main()
{
	int ch,ch2;
	FILE *fp1,*fp2;
	
	fp1=fopen("f1.txt","r");
	fp2=fopen("f2.txt","r");
	
	if(fp1==NULL || fp2==NULL)
	{
		printf("ERROR:in opening file");
	}
	
	ch=fgetc(fp1);
	ch2=fgetc(fp2);
	
	while(ch!=EOF && ch2!=EOF && ch==ch2)
	{
		ch=fgetc(fp1);
		ch2=fgetc(fp2);
	}
	if(ch==ch2)
	{
		printf("content are same\n");
	}
	else
	{
		printf("content are not same");
	}
	fclose(fp1);
	fclose(fp2);
}
