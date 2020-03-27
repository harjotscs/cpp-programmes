#include<iostream>
using namespace std;
class a{
	int ax;
	public:
		a()
		{
			
		}
		a(int k)
		{
			ax=k;
			cout<<"para parent constructor\n"<<ax<<endl;
		}
};
class b: public a{
	public:
		b():a(5)
		{
			cout<<"default child constructor\n";
		}
};
int main()
{
	b a;
}
