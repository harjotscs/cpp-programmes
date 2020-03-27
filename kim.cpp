#include<iostream>
using namespace std;
y(float a,float b,int c)
{
	cout<<((a+b+c)/60)*100;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	y(a,b,c);
}
