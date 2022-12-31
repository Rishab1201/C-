#include<stdio.h>

void display(int a[],int n);
void bubbleSort(int a[], int n);

int main()
{
	int a[100],n,i;
	
	printf("Enter elements:\n");
	scanf("%d",&n);
	
	for(i=0; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	bubbleSort(a,n);
	display(a,n);
}

void display(int a[],int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("(%d)\t",a[i]);
	}
}

void bubbleSort(int a[],int n)
{
	int i,j,temp;
	
	for(i=0; i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
