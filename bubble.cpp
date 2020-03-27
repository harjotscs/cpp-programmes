#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,j,m;
	cout<<"Enter total no. of elements\n";
	cin>>n;
	cout<<"Enter all the inputs:- \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			m=a[i];
			a[i]=a[i+1];
			a[i+1]=m;
		}
	}
	}
	
		for(i=0;i<n;i++)
	{
		cout<<endl<<a[i]<<endl;
	}
}
