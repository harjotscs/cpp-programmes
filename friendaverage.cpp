#include<iostream>
using namespace std;
class jk{
	int a,b,c;
	public:
		g()
		{
			cin>>a>>b>>c;
		}
		friend int h();
}k;

int h()
{
	int d;
	d=(k.a+k.b+k.c)/3;
	cout<<d;
}
int main()
{
	k.g();
	h();
}

