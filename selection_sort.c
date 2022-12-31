#include<stdio.h>

void selectionsort(int a[],int n);
void display(int a[],int n);
int main()
{
	int n,i;
	
	int a[100];
	
	printf("Enter the elements:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	
	selectionsort(a,n);
	display(a,n);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void selectionsort(int a[],int n)
{
	int i,j,temp,pos;
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[pos])
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
}
