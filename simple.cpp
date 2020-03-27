#include<iostream>
#include<math.h>
using namespace std;
void c(float a)
{
	float ci;
	ci=a*pow((1+8.5/100),3);
	cout<<"Final amount in case of Compound interest= "<<ci;
}
void s(float a)
{
	float s;
	s=(a*8.5*3)/100;
	s=s+a;
	cout<<"\nFinal amount in case of Simple interest is="<<s;
}
int main()
{ float x;
	cout<<"Enter the total amount\n";
	cin>>x;
	c(x);
	s(x);
}
