#include<stdio.h>

int main()
{
	char ch[20];
	int cnt=0,cnt1=0;
	char *ptr;
	
	printf("Enter character:\n");
	gets(ch);
	
	ptr=ch;
	
	while(*ptr!='\0')
	{
		if(*ptr=='A' || *ptr=='a' || *ptr=='E' || *ptr=='e' || *ptr=='I' || *ptr=='i' || *ptr=='O' || *ptr=='o' || *ptr=='U' || *ptr=='u')
		{
			cnt++;
		}
		else
		{
			cnt1++;
		}
		ptr++;
	
	}
	printf("Vowels=%d\n",cnt);
	
	printf("Consonant=%d",cnt1);
}
