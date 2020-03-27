#include<iostream>
using namespace std;
class a
{
	int b;
	public:
		i()
		{
		  cin>>b;	
		}
		int  operator >(a s)
		{
			if (b>s.b)
			{
				cout<<"greater"<<b+s.b;
			}
			else 
			cout<<"small"<<b-s.b;
		}
		o()
		{
			cout<<b;
		}
}z;
int main()
{ a s;
z.i();
s.i();
	z>s;
	
}
