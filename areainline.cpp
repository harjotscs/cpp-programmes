#include<iostream>
using namespace std;
inline int c(int a)
{
	cout<<3.14*a*a;
	 
}
inline int r(int l,int b)
{
	cout<<l*b;
}
int main()
{
	int j,m,n;
	cout<<"ENTER RADIUS OF CIRCLE\n";
	cin>>j;
	c(j);
	cout<<"ENTER LENGTH & BREADTH OF RECTANGLE\n";
	cin>>m>>n;
	r(m,n);
}
