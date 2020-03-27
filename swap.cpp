#include<iostream>
using namespace std;
h()
{
	int a,b,c;
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<a<<"\n"<<b;
}
int main()
{
	h();
}
