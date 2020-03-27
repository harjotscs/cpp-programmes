#include<iostream>
using namespace std;
class k{
	int x,y,z;
	public:
		h(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		int operator++()
		{
			x=x+4;
			y=y+4;
			z=z+4;
		}
		int operator-()
		{
			x=x-11;
			y=y-11;
			z=z-11;
		}
		int operator--()
		{
			x=x-4;
			y=y-4;
			z=z-4;
		}
		int operator++(int)
		{
			x=x+1;
			y=y+1;
			z=z+1;
		}
		int operator--(int)
		{
			x=x-2;
			y=y-2;
			z=z-2;
		}
	int	o()
		{
			cout<<x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
		}
		
}m;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	m.h(a,b,c);
	m++;
	m.o();
	m--;
	m.o();
	++m;
	m.o();
	--m;
	m.o();
	-m;
	m.o();
	
}

