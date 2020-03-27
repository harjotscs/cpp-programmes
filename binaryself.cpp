#include<iostream>
using namespace std;
class k{
	int a;
	public:
		i()
		{
			cin>>a;
		}
		int operator <(k b )
		{
			if(a<b.a)
			{
				cout<<"\nhi\n";
			}
			else
			{
				cout<<"\nBye\n";
			}
			
		}
}a,b;
int main()
{
	a.i();
	b.i();
	a<b;
	
}
