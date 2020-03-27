#include<iostream>
using namespace std;
h()
{
	int a[5],i,s=0;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			s=s+a[i];
			
		}
	}
	cout<<s;
}
int main()
{
	h();
}
