#include<iostream>
using namespace std;
class a{
		int k;
	public:
		f()
		{
			cin>>k;
		}
		operator int()
		{
		return	k*1000;
		}
		
		operator float()
		{
			return k*100;
			
		}
}d;
int main()
{
	int p;
	float f;
	d.f();
	p=d;
	f=d;
	cout<<p<<endl<<f;
}
