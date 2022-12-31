#include<iostream>
using namespace std;

int main()
{
	int num,sum=0,rem,temp;
	
	cout<<"Enter number:"<<endl;
	cin>>num;
	
	temp=num;
	
	while(num>0)
	{
		rem = num % 10;
		sum = rem + 10 * sum;
		num = num/10;
	}
	if(temp==sum)
	{
		cout<<"palindrom";
	}
	else
	{
		cout<<"Not palindrom";
	}
}
