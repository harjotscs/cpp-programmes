#include<iostream>
using namespace std;
h()
{
	int a,b,c,l;
	cin>>a>>b>>c;
	(a>b)?l=a:l=b;
	(l>c)?cout<<l<<" is greater":cout<<c<<" is greater";

}
int main()
{
	
	h();
}
