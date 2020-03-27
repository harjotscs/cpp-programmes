#include<iostream> 
using namespace std; 
class s
{
	private:
		int a,b;
		public:
			s(int x,int y)
			{
				a=x;
				b=y;
			}
			s(s &o1)
			{
				a=o1.a;
				b=o1.b;
			}
			int h()
			{
				return a;
			}
			int k()
			{
				return b;
			}
};
int main()
{
	s o(2,5);
	s o1=o;
	cout<<o.h()<<endl<<o.k();
	cout<<endl<<o1.h()<<endl<<o1.k();	
}
