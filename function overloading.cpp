#include<iostream>
using namespace std;
h(float r)
{
	float a;
	a=3.14*r*r;
	cout<<"\n area of circle\n"<<a;
}
h(float l,float b)
{
	float a;
	a=l*b;
		cout<<"\n area of rectangle"<<a;
}
h(int x)
{
	int j;
	j=x*x;
		cout<<"\n area of square="<<j;
		
}
int main()
{
	float r,a,b;
	int c;
	cout<<"ENTER RADIUS OF CIRCLE=";
cin>>r;
h(r);
cout<<"\nENTER LENGTH & BREADTH OF RECTANGLE=\n";
cin>>a>>b;
h(a,b);
cout<<"\nENTER LENGTH OF SQUARE=\n";
cin>>c;
h(c);
}



