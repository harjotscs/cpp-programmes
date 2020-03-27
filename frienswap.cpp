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
			int s;
			s=i.b;
			i.b=i.a;
			i.a=s;
			cout<<i.a<<endl<<i.b;
		}
}k;
int main()
{
	int s;
	s=l.g();
	k.h(l);
}
