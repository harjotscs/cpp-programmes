#include<iostream>
using namespace std;
class roar{
	int n,l;
	public:
		roar()
		{
			n=9;
			l=8;
			cout<<"default"<<endl;
		}
		roar(int c,int d)
		{
			n=c;
			l=d;
			cout<<"parameter"<<endl;
		}
		roar(roar &k)
		{
			n=k.n;
			l=k.l;
			cout<<"Copy"<<endl;
		}
		o()
		{
			cout<<n*l<<endl;
		}
}k,p;
int main()
{
	k.o();
	int g,h;
	cin>>g>>h;
	roar k(g,h);
	k.o();
	/*roar p(k);*/roar p=k;
	k.o();
	p.o();

}
