#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,l,s;
	cout<<"Enter total no. of elements\n";
	cin>>n;
	cout<<"Enter all elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	l=a[0];
		s=a[0];
	for(i=1;i<n;i++)
	{
		
		if(a[i]>l)
		{
			l=a[i];
			
		}
		
		if(a[i]<s)
		{
			s=a[i];
		}
	}
	cout<<"Largest no.="<<l<<endl<<"Smallest no.="<<s<<endl;
	
	
}
