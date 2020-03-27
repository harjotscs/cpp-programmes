#include<iostream>
using namespace std;
h(int a,int b)
{
	int x;
	x=a;
	a=b;
	b=x;
	cout<<a<<"\n"<<b;
}
j(int &a,int &b)
{
	int x;
	x=a;
	a=b;
	b=x;
	cout<<a<<"\n"<<b;
}
k(int *a,int *b)
{
	int x;
	x=*a;
	*a=*b;
	*b=x;
	cout<<a<<"\n"<<b;
}
int main()
{
	int a,b;
	int *x,*y;
	cin>>a>>b;
	x=&a;
	y=&b;
	h(a,b);	
	cout<<"\t";
	j(a,b);
	cout<<"\t";
	k(x,y);
}
