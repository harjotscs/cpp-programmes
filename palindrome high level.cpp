#include<iostream>
using namespace std;
int p(int n)
{
	int a,b,s=0,x=0;
	b=n;
	while(n>0)
	{
		a=n%10;
		n=n/10;
		s=s*10+a;
	}
	cout<<s<<endl;
	if(s==b)
	{
		cout<<"no. is palindrome"<<endl;
	}
	else
	{
		n=s+s;
		p(n);
	}
}

int main()
{
	int n;
	cin>>n;
	p(n);
}
