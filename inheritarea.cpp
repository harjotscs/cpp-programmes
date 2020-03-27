#include<iostream>
using namespace std;
class A{
	int a;
	public:
		
	h()
	{
		cin>>a;
	}
	r()
	{
		return a;
	}
};
class B : private A{
	int b,c;
	public:
		
		ar()
		{
			h();
			c=r();
			cin>>b;
			cout<<b*c;
		}
}f;
int main()
{
	f.ar();
}
