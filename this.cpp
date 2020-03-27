#include<iostream>
using namespace std;
class test{
	int x;
	public:
		void setx(int x)
		{
			this->x= x;
		}
		void print()
		{
			cout<<"x="<<x<<endl;
			cout<<"address"<<this<<"\n";
		}
};

int main()
{
  test obj,obj1,obj2;
  int x=20;
  
}
