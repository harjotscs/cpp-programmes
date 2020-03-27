#include<iostream>
using namespace std;
class pp
{
	int a,b;
	public:
		pp()
		{
			a=5;
			b=-5;
		}
		void show()
		{
			cout<<" a="<<a<<"and b="<<b;
 
		}
		friend void operator --(pp &);
		friend void operator --(pp &,int);
 
}m;
void operator --(pp &m)
{
	--m.a;
	--m.b;
}
void operator --(pp &m,int)
{
	m.a--;
	m.b--;
}
int main()
{
	pp p,p1;
	cout<<"Before prefix decrement";
	p.show();
    --p;
	cout<<"\nAfter prefix decrement";
	p.show();
   cout<<"\nBefore postfix decrement";
	p1.show();
	p1--;
    cout<<"\nAfter postfix decrement";
    p1.show();
 
}
