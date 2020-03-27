//wap to handle exception of class type
#include<iostream>
using namespace std;
class ax{
	private:
		int a,b;
		public:
			h()
			{
				cout<<"Enter two numbers"<<endl;
				cin>>a>>b;
			}
}o;
int main()
{ 
ax o;
o.h();
	try{
		if(o==0)
		{
			throw 1;
		}
	}
	catch(int e)
	{
		cout<<"\nException no."<<e<<" Exception of class"<<endl;
	}
}
