#include<iostream>
using namespace std;
class rect
{
const	int l,b;
	public:
	rect(int a,int c):l(a),b(c)
	{
		cout<<"who i am"<<endl;
	}
	a()
	{
		cout<<l*b;
	}
};
int main()
{
	rect r(4,6);
	r.a();
} 
