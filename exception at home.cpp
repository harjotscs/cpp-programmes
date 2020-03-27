#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two Numbers\n";
	cin>>a>>b;
	int x=a-b;
	try{
		if(x!=0)
		{
			cout<<"Result(a/x)="<<a/x;
		}
		else {
		     throw(x);
		}
	}
	catch(int j)
	{
		cout<<"Exception found "<<x;
	}
}
