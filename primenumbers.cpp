#include<iostream>
using namespace std;
int main()
{
	int a,i,n=0;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			++n;	
		}
	}
	if(n==2)
	{
		cout<<a<<" is a prime";
	}
	else
	{
		cout<<a<<" is not prime";
	}
}
