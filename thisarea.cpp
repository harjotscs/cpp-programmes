#include<iostream>
using namespace std;
class a{
	int l,b;
	public:
		int k(int l,int b)
		{
			this->l=l;
			this->b=b;
			
		}
		int o()
		{
			cout<<"area= "<<this->l*this->b;
		}
}j;
int main()
{
	j.k(5,4);
	j.o();
}
