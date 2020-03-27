#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,s,p=0,x=0;
	cout<<"Enter total no. of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched";
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			p=1;
			x=i;	
		}
		else{
			p=0;
		}
	}
	if(p==1)
	{
		cout<<"Element found at location="<<x+1;
	}
		else
		{
			cout<<"Not found";
		}
}
