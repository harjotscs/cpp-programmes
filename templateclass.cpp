#include<iostream>
using namespace std;
template<class t>
class mix{
	t a,b;
	public:
		mix(t x,t y)
		{
			a=x;
			b=y;
		}
		t sw()
		{
			a=a+b;
			b=a-b;
			a=a-b;
		 cout<<"a="<<a<<"\nb="<<b<<endl;
		}
};
int main()
{
	mix <int>obj(10,20);
	cout<<"After Swap ";
	obj.sw();
}
