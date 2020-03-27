#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a,b,c,l;
	ofstream o("great.txt");
	cin>>a>>b>>c;
	o<<a<<" "<<b<<" "<<c;
	o.close();
	ifstream i("great.txt");
	int x,y,z;
	while(!i.eof())
	{
		i>>x;
		i>>y;
		i>>z;
	}
	i.close();
	l=x;
	if(y>l)
	{
		l=y;
	}
	if(z>l)
	{
		l=z;
	}
	ofstream r("output.txt");
	r<<l;
	r.close();
	
}
