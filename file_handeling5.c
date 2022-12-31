#include<stdio.h>

int main()
{
	if(remove("f1.txt")==0)
	{
		printf("file is deleted");
	}
	else
	{
		printf("file is not deleted");
	}
}
