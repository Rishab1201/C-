#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp,*fp1;
	char ch;
	int cnt=1,del=0,flag=0;
	
	char data[30]="\n my name is rishab";
	
	fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		printf("ERROR");
		return 1;
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		ch=getc(fp);
		printf("%c",ch);
	}
	rewind(fp);
	
	printf("\nEnter the line which you want to replace:");
	scanf("%d",&del);
	
	fp1=fopen("file2.txt","w");
	
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		ch=getc(fp1);
		
		if(ch=='\n')
		cnt++;
		if(cnt!=del)
		{
			putc(ch,fp1);
		}
		if(flag==0 && cnt==del)
		{
			fwrite(data,1,strlen(data),fp1);
			flag=1;
		}
	}
	
	fclose(fp);
	fclose(fp1);
	
	remove("file1.txt");
	
	rename("file2.txt","file1.txt");
	
	printf("replace line-\n");
	
	fp=fopen("file1.txt","r");
	if(fp==NULL){
		printf("\nERROR");
		return 1;
		
	}
	ch=getc(fp);
	while(ch!=EOF)
	{
		ch=getc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	
	printf("\n");
		
}
