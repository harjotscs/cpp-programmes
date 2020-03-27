#include<iostream>
using namespace std;
int main()
{
	int a,i,n=1,p=1;
	cin>>a;
	
	for(i=0;i<4;i++)
	{
		n=p*a;
		p=n;
	}
	cout<<n;
	
}
