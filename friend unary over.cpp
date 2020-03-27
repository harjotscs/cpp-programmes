#include<iostream>
using namespace std;
class k{
	int a;
	public:
		i()
		{
			cin>>a;
		}
		int friend operator-(k x);
		o()
		{
			cout<<a;
		}
}x;
int operator-(k x)
{
	x.a=x.a+6;
}
int main()
{
	x.i();
	-x;
	x.o();
}
