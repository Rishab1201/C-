#include<stdio.h>
#include<string.h>

int  top=-1;
char stack[100],ch;

void push(char x)
{
	stack[++top]=x;
}

char pop()
{
	char ch;
	
	ch=stack[top];
	printf("%c",ch);
	top--;
	
	return ch;
}

int main()
{
	int len,i;
	char str[100],ch;
	
	printf("Enter string:\n");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(str[i]!='\0')
		{
			push(str[i]);
		}
		else
		{
			while(top>-1)
			{
				ch = pop();
				printf("%c",ch);
			}
		}
	}
}

