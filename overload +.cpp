#include<iostream>
using namespace std;
class d{
	private: 
	int a;
	public:
		get(){
			cin>>a;
		}
		int operator +(d y)
		{
			d z;
			z.a= a+y.a+40;
			cout<<"overloaded= "<<z.a;
		}
}x;
int main()
{
	d x,y;
	x.get();
	y.get();
	x+y;
	
}
