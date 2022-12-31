

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max[100];

void pop();
void push(char x);

int top=-1;

int main()
{
	int i,length,n,ch;

	char str[100];
//	printf("How much character you want to enter:\n");
//	scanf("%d\n",&n);
	
	printf("Enter String:\n");	
	gets(str);
	
	length=strlen(str);
	
	for(i=0;i<length;i++)
	{
		push(str[i]);
	}
	for(i=0;i<length;i++)
	{
		pop();
	}

}

void pop()
{
	max[top];
	printf("%c\t",max[top]);
	top--;
}

void push(char x)
{
	max[++top]=x;
}

