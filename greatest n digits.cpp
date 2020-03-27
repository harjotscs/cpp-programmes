#include<iostream>
using namespace std;
int main()
{
	int n,g,i;
	cout<<"Enter total no. of Elements"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	g=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>g)
		{
			g=a[i];
		}
	}
	cout<<"Greatest Digit out of these "<<n<<"Elements:-"<<g;
}
