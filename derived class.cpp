#include<iostream>
using namespace std;
class rectangle
{
	private:
		float l;
		public:
			
		float getl()
			{
				cin>>l;
				return l;
			};
			
};
class area:private rectangle
{
	private: 
	float b,p;
	public:
	/*	h()
		{
		p=getl();
		}
		*/
	float	getb()
		{
		cin>>b;	
		}
		
		a()
		{
		cout<<b*getl();
		}
	
}m;
int main()
{
/*	m.h();*/
	m.getb();
	m.a();
	
}
