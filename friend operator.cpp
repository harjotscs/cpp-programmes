#include<iostream>
using namespace std;
class k{
	private:
	int x,y,z;
	public:
		h(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		
	int	o()
		{
			cout<<x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
		}
		friend int operator++(k &);
		friend int operator--(k &);
		friend int operator++(k &,int);
		friend int operator--(k &,int);
}m;
int operator++(k &m)
		{
			m.x=m.x+4;
			m.y=m.y+4;
			m.z=m.z+4;
		}
		int operator--(k &m)
		{
			m.x=m.x-4;
			m.y=m.y-4;
			m.z=m.z-4;
		}
		int operator++(k &m,int)
		{
			m.x=m.x+1;
			m.y=m.y+1;
			m.z=m.z+1;
		}
		int operator--(k &m,int)
		{
			m.x=m.x-2;
			m.y=m.y-2;
			m.z=m.z-2;
		}
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
	
}

