#include<iostream>
#include<string>
using namespace std;
class customer{
	string c;
	int a,d,b;
	public:
		customer(string f,int i,int j,int k)
		{
			c=f;
			a=i;
			d=j;
			b=k;
		}
		o()
		{
			cout<<"Name="<<c<<endl<<"A/C N0.="<<a<<endl<<"D.O.B="<<d<<endl<<"balance in account "<<b<<endl;
		}
};
int main()
{
	customer q("Harjot",488789,4122000,126700);
	q.o();
}
