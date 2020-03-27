#include<iostream>
using namespace std;
int main()
{
	int a,b=0,s=0,n=0;
	cin>>a;
	n=a;
	while(a>0)
	{
		b=a%10;
		b=s+b*b*b;
		s=b;
		a=a/10;
	}
	if(b==n)
	{
		cout<<n<<" is an armstrong no.";
	}
	else
	{
		cout<<n<<" is not an armstrong no.";
	}
}
