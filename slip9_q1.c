								//SLIP NO.9
//Q.1
#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character::");
	scanf("%c",&ch);
	
	if((ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u')||ch=='U')
	{
		printf("\t%c-->is a vowel.",ch);
	}
	else
	{
		printf("\t%c-->is a consonant.",ch);
	}
}
