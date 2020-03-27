#include<iostream>
using namespace std;
class A;
class B;
class C;
class A
{
	int a;
	public:
		g()
		{
			cin>>a;
		}
	int	p()
		{
			return a;
		}
	friend int h(A,B,C);
}i;

class B
{
	int b;
	public:
		g()
		{
			cin>>b;
		}
		int	p()
		{
			return b;
		}
	friend int h(A,B,C);
}j;

class C
{
	int c;
	public:
		g()
		{
			cin>>c;
		}
		int	p()
		{
			return c;
		}
	friend int h(A,B,C);
}k;
h(A a,B b,C c)
{
	int l=a.p();
	if(b.p()>l )
	{
		l=b.p();
	}
		if(c.p()>l )
	{
		l=c.p();
	}
	cout<<l;
	
}
int main()
{
	
	i.g();
	j.g();
	k.g();
	h(i,j,k);
}
