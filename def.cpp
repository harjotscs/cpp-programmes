#include<iostream>
using namespace std;
class ax{
	public:
	ax(){
		cout<<"default constructor"<<endl;
	}
	ax(int a,int b)
	{
		cout<<a<<endl<<b<<endl;
	}
	ax(int a,int b,int c)
	{
		cout<<a<<endl<<b<<endl<<c<<endl;
	}
};
int main()
{
	ax o;
	ax(2,3);
	ax(4,5,6);
}
