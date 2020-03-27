#include<iostream>
using namespace std;
class km
{
	float a,k;
	public:
		g()
		{
			cout<<"ENTER METERS TO CONVERT TO KILOMETER\t";
			cin>>a;
		}
		friend void h();
}j;
void h()
{
	j.k=j.a/1000;
	cout<<"KIOMETERS= "<<j.k;
	
}
int main()
{
	j.g();
	h();
}
