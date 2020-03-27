#include<iostream>
using namespace std;
class ax{
	int x,y;
	public:
		g()
		{
			cin>>x>>y;
		}
		
		int operator++()
		{
			if(x>y)
			{
				cout<<x<<" is greater than "<<y<<endl;
				x=x+100;
			}
			else
			{
				cout<<"\ngo ahead\n";
				y=y+10;
			}
		}
		
		
		int operator++(int)
		{
			if(x>y)
			{
				cout<<x<<" is not equal to "<<y<<endl;
				x=x+500;
			}
			else
			{
				cout<<"\ngo back\n";
				y=y+20;
			}
		}
		
		o()
		{
			cout<<endl<<x<<endl<<y<<endl;
		}
}b;
int main()
{
	b.g();
	++b;
	b.o();
	b++;
	b.o();
	
	
	
}
