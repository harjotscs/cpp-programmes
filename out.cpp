#include<iostream>
using namespace std;
class b;
class a{
	int a,b;
	public:
		g()
		{
			cin>>a>>b;
		}
		friend class b;
}l;
class b{
	public:
	int	h(a i)
		{
			cout<<i.a<<endl<<i.b;
		}
}k;
int main()
{
	l.g();
	k.h(l);
}
