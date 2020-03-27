#include<iostream>
using namespace std;
class ax{
	int a,b;
	public:
		ax()
		{
			cout<<"default Constructor Called"<<endl;
		}
		ax(float z)
		{
			try{
				throw z;
			}
			catch(...)
			{
				cout<<"Caught in parameterized constructor"<<endl;
			}
		}
};
int main()
{
	float a;
	cin>>a;
//	ax d;
	ax d(a);
	
}
