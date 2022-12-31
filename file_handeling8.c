#include<stdio.h>

int main()
{
	FILE *fp;
	
	char ch;
	char data[30];
	int cnt=0;
	int i=0;
	
	fp=fopen("rishab.txt","r");
	
	ch=getc(fp);
	while(ch!=EOF)
	{
		cnt++;
		ch=getc(fp);
		data[i]=ch;
		i++;
	}
for(i=(cnt-1);i>=0;i--)
	{
		ch=data[i];
		printf("%c",ch);
	}
	
	
	
}
