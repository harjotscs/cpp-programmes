/*   AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY AMBIGUITY */

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
				cout<<l;
			};
			
};
class area:private rectangle
{
	private: 
	float b;
	public:

	float p=getl();
	
	float	getl()
		{
			
		cin>>b;	
		cout<<b;
		}
		
	
}m;
int main()
{
	
	m.getl();
	
	
}
